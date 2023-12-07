using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LockYZero : MonoBehaviour
{
    public GameObject parent;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = new Vector3(parent.transform.position.x, 0, parent.transform.position.z);
    }
}
