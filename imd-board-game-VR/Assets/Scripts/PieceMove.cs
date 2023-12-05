using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR;

public class PieceMove : MonoBehaviour
{
    List<InputDevice> inputDevices = new List<InputDevice>();

    public bool isMoving = false;

    public float gridSize = 1f;

    List<Vector3> possibilities = new List<Vector3>();
    public List<Vector3> offsets = new List<Vector3>();

    Vector3 pickedUpPosition;
    Quaternion defaultRotation;

    float trigger = 0f;

    void Awake()
    {

    }

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("start");
        pickedUpPosition = transform.position;
        defaultRotation = transform.rotation;

        
        //StartCoroutine(mover());
    }
    
    IEnumerator mover()
    {
        yield return new WaitForSeconds(2);
        trigger = 1f;
        yield return new WaitForSeconds(1);
        transform.position = new Vector3(3.6f, 0f, 6.6f);
        transform.Rotate(20f, 0f, 30f);
        yield return new WaitForSeconds(1);
        trigger = 0f;

    }

    // Update is called once per frame
    void Update()
    {
        InputDevices.GetDevices(inputDevices);

        foreach (var inputDevice in inputDevices)
        {
            inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue);
            trigger = triggerValue;
            Debug.Log(inputDevice.name + " " + inputDevice.characteristics + " and " + triggerValue);
        }
        InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller, inputDevices);



        Debug.Log(trigger);
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
                Debug.Log(pickedUpPosition + offset);
                if (Vector3.Distance(pickedUpPosition + offset, transform.position) <= 1f)
                {
                    if (move == pickedUpPosition || (pickedUpPosition + offset - transform.position).magnitude < (transform.position - move).magnitude)
                    {
                        move = pickedUpPosition + offset;
                    }
                }
            }
            transform.position = move;
            transform.rotation = defaultRotation;

            pickedUpPosition = transform.position;
            Debug.Log("put it down");
        }
    }
}
