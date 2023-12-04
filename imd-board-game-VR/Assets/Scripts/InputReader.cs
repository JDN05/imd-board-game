using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
public class InputReader : MonoBehaviour
{
    List<InputDevice> inputDevices = new List<InputDevice>();

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("hi");
        initializeInputReader();
    }

    // Update is called once per frame
    void Update()
    {
        if(inputDevices.Count < 3)
        {
            initializeInputReader();
        }   

        
    }

    void grab() {
        RaycastHit hit;
    
    }
    
    void initializeInputReader()
    {
        InputDevices.GetDevices(inputDevices);
        InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller, inputDevices);

        foreach(var inputDevice in inputDevices)
        {
            inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue);
            Debug.Log(inputDevice.name + " " + inputDevice.characteristics + " and " + triggerValue);
        }
    }

   
}
