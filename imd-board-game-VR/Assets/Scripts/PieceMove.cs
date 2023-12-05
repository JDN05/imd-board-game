using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR;

public class PieceMove : MonoBehaviour { 
    List<InputDevice> inputDevices = new List<InputDevice>();

    public bool isMoving = false;

    public float gridSize = 1f;

    public float gridMinX;
    public float gridMaxX;
    public float gridMinZ;
    public float gridMaxZ;

    List<Vector3> possibilities = new List<Vector3>();
    public List<Vector3> offsets = new List<Vector3>();

    Vector3 pickedUpPosition;
    Quaternion defaultRotation;

    float trigger = 0f;

    Rigidbody rigidbody;

    void Awake()
    {

    }

    // Start is called before the first frame update
    void Start()
    {
        rigidbody = GetComponent<Rigidbody>();

        pickedUpPosition = transform.position;
        defaultRotation = transform.rotation;

        InputDevices.GetDevices(inputDevices);
        InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller, inputDevices);

        StartCoroutine(mover());
    }
    
    IEnumerator mover()
    {
        for (int i = 0; i < 4; i++)
        {
            yield return new WaitForSeconds(2);
            trigger = 1f;
            yield return new WaitForSeconds(1);
            transform.position = transform.position + gridSize * new Vector3((float)-(i%2 + 1), 0f, (float)((i+1)%2 + 1));
            transform.Rotate(20f, 0f, 30f);
            yield return new WaitForSeconds(1f);
            trigger = 0f;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(inputDevices.Count < 3) {
            InputDevices.GetDevices(inputDevices);

            foreach (var inputDevice in inputDevices)
            {
                inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue);
                trigger = triggerValue;
                Debug.Log(inputDevice.name + " " + inputDevice.characteristics + " and " + triggerValue);
            }
            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller, inputDevices);
        }
        
        if(!isMoving && trigger > 0f)
        {
            isMoving = true;
            Debug.Log("picked it up");
        }

        if(isMoving && trigger == 0f)
        {
            isMoving = false;

            Vector3 move = pickedUpPosition;
            foreach (Vector3 offset in offsets)
            {
                
                Vector3 gridOffset = offset * gridSize;
                Vector3 spot = transform.position + gridOffset;
                if(spot.x > gridMaxX || spot.x < gridMinX || spot.z > gridMaxZ || spot.z < gridMinZ)
                {
                    Debug.Log("outta bounds");
                    break;
                }
                Debug.Log(pickedUpPosition + gridOffset);
                if (Vector3.Distance(pickedUpPosition + gridOffset, transform.position) <= gridSize)
                {
                    if (move == pickedUpPosition || (pickedUpPosition + gridOffset - transform.position).magnitude < (transform.position - move).magnitude)
                    {
                        move = pickedUpPosition + gridOffset;
                    }
                }
            }
            transform.position = move;
            transform.rotation = defaultRotation;

            rigidbody.velocity = Vector3.zero;
            rigidbody.angularVelocity = Vector3.zero;

            pickedUpPosition = transform.position;
            Debug.Log("put it down");
        }
    }
}
