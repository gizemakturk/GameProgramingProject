using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RottenBlock : MonoBehaviour
{


    private Cooldown dropCooldown;
    private Cooldown destroyCooldown;

    void Start()
    {
        
    }

    private bool drop;
    void FixedUpdate()
    {
        

        if (playerDetected)
        {

            if (!drop&&GetDropCooldown().Control())
            {
                drop = true;
            }
            else if(!drop)
            {
                Shake();
            }
            else
            {
                Drop();
                if (GetDestroyCooldownn().Control())
                    Destroy(this.gameObject);
            }

        }

    }


    private float shakeSpeed = 0.012f;
    private void Shake()
    {

        transform.position = new Vector2(transform.position.x + shakeSpeed, transform.position.y);
        shakeSpeed *= -1;
    }

    private float dropSpeed = 0.1f;
    private void Drop()
    {

        transform.position = new Vector2(transform.position.x,transform.position.y-dropSpeed);

    }

    private Cooldown GetDropCooldown()
    {
        if (dropCooldown == null)
        {
            dropCooldown = new Cooldown(1500);
        }

        return dropCooldown;

    }

    private Cooldown GetDestroyCooldownn()
    {
        if (destroyCooldown == null)
        {
            destroyCooldown = new Cooldown(4000);
        }

        return dropCooldown;

    }


    private bool playerDetected;

    private void OnCollisionEnter2D(Collision2D collision)
    {

        string tag = collision.gameObject.tag;

        if (tag == Constants.playerTag)
        {
            playerDetected = true;
        }


    }



}
