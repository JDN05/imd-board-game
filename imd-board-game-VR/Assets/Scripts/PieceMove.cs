using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR;

public class PieceMove : MonoBehaviour { 

    List<InputDevice> inputDevices = new List<InputDevice>();

    public bool isMoving = false;
    public bool isCaptured = false;
    bool captureToggled = false;

    bool calibrated = false;

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
    float index = 0f;

    Rigidbody rigidbody;

    void Awake()
    {

    }

    // Start is called before the first frame update
    void Start()
    {
        rigidbody = GetComponent<Rigidbody>();

        

        InputDevices.GetDevices(inputDevices);
        InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller, inputDevices);

        StartCoroutine(calibrate());
    }

    IEnumerator calibrate() {
        yield return new WaitForSeconds(1);

        pickedUpPosition = transform.position;
        defaultRotation = transform.rotation;
        calibrated = true;
    }

    // Update is called once per frame
    void Update()
    {
        if(calibrated) {

        
            if(inputDevices.Count < 3) {
                InputDevices.GetDevices(inputDevices);

                foreach (var inputDevice in inputDevices)
                {
                    inputDevice.TryGetFeatureValue(CommonUsages.grip, out float triggerValue);
                    trigger = triggerValue;
                    Debug.Log(inputDevice.name + " " + inputDevice.characteristics + " and " + triggerValue);

                    inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float indexValue);
                    index = indexValue;
                }
                InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller, inputDevices);
            }
            
            if(!isMoving && trigger > 0f)
            {
                isMoving = true;
                Debug.Log("picked it up");
            }

            if(isMoving && trigger == 0f && !isCaptured)
            {
                isMoving = false;
                transform.position = new Vector3(transform.position.x, pickedUpPosition.y, transform.position.z);

                Vector3 move = pickedUpPosition;
                foreach (Vector3 offset in offsets)
                {
                    Vector3 gridOffset = Vector3.zero;
                    Vector3 spot = Vector3.zero;

                    gridOffset = offset * gridSize;
                    spot = pickedUpPosition + gridOffset;
                    if(spot.x > gridMaxX || spot.x < gridMinX || spot.z > gridMaxZ || spot.z < gridMinZ)
                    {
                        Debug.Log("outta bounds");
                    } else {
                        Debug.Log(pickedUpPosition + gridOffset);
                        if (Vector3.Distance(spot, transform.position) <= gridSize)
                        {
                            if (Vector3.Distance(spot, transform.position) < Vector3.Distance(transform.position, move))
                            {
                                move = spot;
                            }
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

            if(index > 0f && !captureToggled)
            {
                if(isCaptured) {
                    transform.position = pickedUpPosition;
                    transform.rotation = defaultRotation;

                    rigidbody.velocity = Vector3.zero;
                    rigidbody.angularVelocity = Vector3.zero;
                    isCaptured = false;
                    captureToggled = true;
                } else {
                    isCaptured = true;
                    captureToggled = true;
                }
            } else if(index == 0f && trigger == 0f) {
                captureToggled = false; 
                if(!(transform.position.x > gridMaxX || transform.position.x < gridMinX || transform.position.z > gridMaxZ || transform.position.z < gridMinZ)) {
                    isCaptured = false;
                }
            }
        }
    }
}
