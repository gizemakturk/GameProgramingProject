using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Movement: MonoBehaviour, Feature
{


    // direction : 0-left   1-right     2-down  3-up 

    //---------Attributes--------------


    public float maxVelocity;
    public float acceleration;
    public float gravity;
    public float friction;

    //---------------------------------


    //---------Fixers----------------
    private float extraFriction;
    private float fixer = 0.001f;
    //------------------------------



    private Rigidbody2D rigidbody2D;
    private Transform transform;

    public void Init()
    {
        rigidbody2D = this.GetComponent<Rigidbody2D>();
        transform = this.GetComponent<Transform>();
    }
    public void Tick() {

        PhysicFunc();
        ControlMaxVelocity();

    }


    private void PhysicFunc()
    {

        // Gravity
        SetVelocityAb(3,rigidbody2D.velocity.y-gravity);

        // Friction
        if (Mathf.Abs(rigidbody2D.velocity.x) > 0.1f)
        {

            if (rigidbody2D.velocity.x > 0)
            {
                if (rigidbody2D.velocity.x <= friction+extraFriction)
                    SetVelocityAb(0, 0);
                else
                    GiveVelocityAb(0, friction + extraFriction);
            }
            else
            {
                if (rigidbody2D.velocity.x >= friction + extraFriction)
                    SetVelocityAb(1, 0);
                else
                    GiveVelocityAb(1, friction + extraFriction);
            }

        }

    }

    private void ControlMaxVelocity()
    {


        if (this.GetComponent<Rigidbody2D>().velocity.x < -maxVelocity)
        {
            SetVelocity(0, maxVelocity);
        }
        else if (this.GetComponent<Rigidbody2D>().velocity.x > maxVelocity)
        {
            SetVelocity(1, maxVelocity);
        }

        if (this.GetComponent<Rigidbody2D>().velocity.y < -maxVelocity)
        {
            SetVelocity(2, maxVelocity);
        }
        else if (this.GetComponent<Rigidbody2D>().velocity.y > maxVelocity)
        {
            SetVelocity(3, maxVelocity);
        }




    }


    public void GiveVelocity(int direction,float velocity)
    {


        if (direction == 0)
        {
            transform.position = new Vector2(transform.position.x - fixer, transform.position.y);
            rigidbody2D.velocity += new Vector2(-velocity, 0);
        }
        else if(direction == 1)
        {
            transform.position = new Vector2(transform.position.x + fixer, transform.position.y);
            rigidbody2D.velocity += new Vector2(velocity, 0);
        }
        else if(direction == 2)
        {
            transform.position = new Vector2(transform.position.x, transform.position.y - fixer);
            rigidbody2D.velocity += new Vector2(0, -velocity);
        }
        else if (direction == 3)
        {
            transform.position = new Vector2(transform.position.x, transform.position.y + fixer);
            rigidbody2D.velocity += new Vector2(0, velocity);
        }
        else
        {
            throw new System.Exception("unknown direction");
        }

    }


    public void GiveVelocityAb(int direction, float velocity)
    {


        if (direction == 0)
        {
            rigidbody2D.velocity += new Vector2(-velocity, 0);
        }
        else if (direction == 1)
        {
            rigidbody2D.velocity += new Vector2(velocity, 0);
        }
        else if (direction == 2)
        {

            rigidbody2D.velocity += new Vector2(0, -velocity);
        }
        else if (direction == 3)
        {
            rigidbody2D.velocity += new Vector2(0, velocity);
        }
        else
        {
            throw new System.Exception("unknown direction");
        }

    }


    public void SetVelocity(int direction, float velocity)
    {


        if (direction == 0)
        {
            transform.position = new Vector2(transform.position.x - fixer, transform.position.y);
            rigidbody2D.velocity = new Vector2(-velocity, this.GetComponent<Rigidbody2D>().velocity.y);
        }
        else if (direction == 1)
        {
            transform.position = new Vector2(transform.position.x + fixer, transform.position.y);
            rigidbody2D.velocity = new Vector2(velocity, this.GetComponent<Rigidbody2D>().velocity.y);
        }
        else if (direction == 2)
        {
            transform.position = new Vector2(transform.position.x, transform.position.y - fixer);
            rigidbody2D.velocity = new Vector2(this.GetComponent<Rigidbody2D>().velocity.x, -velocity);
        }
        else if (direction == 3)
        {
            transform.position = new Vector2(transform.position.x, transform.position.y + fixer );
            rigidbody2D.velocity = new Vector2(this.GetComponent<Rigidbody2D>().velocity.x, velocity);
        }
        else
        {
            throw new System.Exception("unknown direction");
        }

    }

    public void SetVelocityAb(int direction, float velocity)
    {


        if (direction == 0)
        {
            rigidbody2D.velocity = new Vector2(-velocity, this.GetComponent<Rigidbody2D>().velocity.y);
        }
        else if (direction == 1)
        {
            rigidbody2D.velocity = new Vector2(velocity, this.GetComponent<Rigidbody2D>().velocity.y);
        }
        else if (direction == 2)
        {
            rigidbody2D.velocity = new Vector2(this.GetComponent<Rigidbody2D>().velocity.x, -velocity);
        }
        else if (direction == 3)
        {
            rigidbody2D.velocity = new Vector2(this.GetComponent<Rigidbody2D>().velocity.x, velocity);
        }
        else
        {
            throw new System.Exception("unknown direction");
        }

    }

    public void GiveForce(int direction, float force)
    {

        if (direction == 0)
        {
            transform.position = new Vector2(transform.position.x - fixer, transform.position.y);
            rigidbody2D.AddForce(new Vector2(-force, 0));
        }
        else if (direction == 1)
        {
            transform.position = new Vector2(transform.position.x + fixer, transform.position.y);
            rigidbody2D.AddForce(new Vector2(force, 0));
        }
        else if (direction == 2)
        {
            transform.position = new Vector2(transform.position.x, transform.position.y - fixer);
            rigidbody2D.AddForce(new Vector2(0, -force));
        }
        else if (direction == 3)
        {
            transform.position = new Vector2(transform.position.x, transform.position.y + fixer);
            rigidbody2D.AddForce(new Vector2(0, force));
        }
        else
        {
            throw new System.Exception("unknown direction");
        }

    }





    //------Get/Set----------
    public Vector2 GetVelocity()
    {
        return rigidbody2D.velocity;
    }
    public Rigidbody2D Rigidbody2D { get => rigidbody2D; set => rigidbody2D = value; }
    public float ExtraFriction { get => extraFriction; set => extraFriction = value; }


}
