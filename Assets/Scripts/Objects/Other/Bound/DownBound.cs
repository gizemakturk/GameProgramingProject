using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DownBound : Bound
{


    private void Start()
    {
        
    }

    private void Update()
    {
        
    }




    private void OnTriggerEnter2D(Collider2D collision)
    {

        if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" || (collision.gameObject.layer == 7))
            contactWithGround = true;

        if (!contacts.Contains(collision.gameObject.tag))
        {

            contacts.Add(collision.gameObject.tag);
        }

    }

    private void OnTriggerStay2D(Collider2D collision)
    {

        if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" || (collision.gameObject.layer == 7))
            contactWithGround = true;

        if (!contacts.Contains(collision.gameObject.tag))
        {
            contacts.Add(collision.gameObject.tag);
        }

    }


    private void OnTriggerExit2D(Collider2D collision)
    {

        if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" || (collision.gameObject.layer == 7))
            contactWithGround = false;

        if (contacts.Contains(collision.gameObject.tag))
        {
            contacts.Remove(collision.gameObject.tag);
        }

    }


}