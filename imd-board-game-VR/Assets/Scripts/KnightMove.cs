using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class KnightMove : MonoBehaviour
{
    bool isPickedUp = false;
    bool isPutDown = false;
        
    Vector3 pickedUpPosition;

    ArrayList possibilities = new ArrayList();
    Vector3[] offsets = { new Vector3(1f, 0f, 2f), new Vector3(2f, 0f, 1f), new Vector3(2f, 0f, -1f), new Vector3(1f, 0f, -2f), new Vector3(-1f, 0f, -2f), new Vector3(-2f, 0f, -1f), new Vector3(-2f, 0f, 1f), new Vector3(-1f, 0f, 2f) };

    void Awake()
    {
 
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
            pickedUpPosition = transform.position;
            isPickedUp = false;
            Debug.Log("space");
        } 
        else if(isPutDown)
        {
            Vector3 move = Vector3.zero;
            Debug.Log(pickedUpPosition);
            Debug.Log(transform.position);
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
    }

    private void updatePossibilities()
    {
        
    }

    private void PlayerFound()
    {

    }

    private void PlayerLost()
    {

    }

    private void onDestroy()
    {
    }
}
