using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class KnightMove : MonoBehaviour
{
    public bool isGrabbed = false;

    bool isPickedUp = false;
    bool isPutDown = false;

    List<Vector3> possibilities = new List<Vector3>();
    Vector3[] offsets = { new Vector3(1f, 0f, 2f), new Vector3(2f, 0f, 1f), new Vector3(2f, 0f, -1f), new Vector3(1f, 0f, -2f), new Vector3(-1f, 0f, -2f), new Vector3(-2f, 0f, -1f), new Vector3(-2f, 0f, 1f), new Vector3(-1f, 0f, 2f) };

    Vector3 pickedUpPosition;

    GameObject startTransformation;
    Transform controller;

    Vector3 locationOffset;
    Quaternion rotationOffset;

    void Awake()
    {
        startTransformation = new GameObject();

        startTransformation.transform.position = transform.position;
        startTransformation.transform.rotation = transform.rotation;

        controller = transform;

    }

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(mover());
    }

    IEnumerator mover()
    {
        yield return new WaitForSeconds(2);
        isPickedUp = true;
        yield return new WaitForSeconds(1);
        transform.position = new Vector3(3.6f, 0f, 6.6f);
        yield return new WaitForSeconds(1);
        isPutDown = true;

    }

    // Update is called once per frame
    void Update()
    {
        //isPickedUp = ;
        //isPutDown = ;
        
        if(isPickedUp)
        {
            locationOffset = transform.position - controller.position;
            rotationOffset = transform.rotation * Quaternion.Inverse(controller.rotation);

            isPickedUp = false;
            Debug.Log("space");
        } 
        else if(isPutDown)
        {
            Vector3 move = Vector3.zero;
            foreach (Vector3 offset in offsets)
            {
                Debug.Log(pickedUpPosition + offset);
                if (Vector3.Distance(pickedUpPosition + offset, transform.position) <= 1f)
                {
                    if (move == Vector3.zero)
                    {
                        move = pickedUpPosition + offset;
                    }
                    else
                    {
                        move = (move.magnitude > (pickedUpPosition + offset).magnitude) ? pickedUpPosition + offset : move;
                    }
                }
            }
            isPutDown = false;
            transform.position = move;
        }

        if(isGrabbed)
        {
            transform.position = controller.position + locationOffset;
            transform.rotation = controller.rotation * rotationOffset;
        }
    }
}
