using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Movement: MonoBehaviour, Feature
{


    // direction : 0-left   1-right     2-down  3-up 

    //---------Attributes--------------

    public float acceleration;
    public float gravity;
    public float friction;

    //---------------------------------


    //---------Fixers----------------
    private float extraFriction;
    //------------------------------



    private Rigidbody2D rigidbody2D;

    public void Init()
    {
        rigidbody2D = this.GetComponent<Rigidbody2D>();
    }
    public void Tick() {

        PhysicFunc();
        ControlMaxVelocity();

    }


    //This method applies gravity and friction.
    private void PhysicFunc()
    {

        // Gravity
        SetVelocity(3,rigidbody2D.velocity.y-gravity);

        // Friction
        if (Mathf.Abs(rigidbody2D.velocity.x) > 0.1f)
        {

            if (rigidbody2D.velocity.x > 0)
            {
                if (rigidbody2D.velocity.x <= friction+extraFriction)
                    SetVelocity(0, 0);
                else
                    GiveVelocity(0, friction+ extraFriction);
            }
            else
            {
                if (rigidbody2D.velocity.x >= friction+ extraFriction)
                    SetVelocity(1, 0);
                else
                    GiveVelocity(1, friction+ extraFriction);
            }

        }

    }


    //This method checks velocity doesn't exceed the max speed.
    private void ControlMaxVelocity()
    {


        if (this.GetComponent<Rigidbody2D>().velocity.x < -Constants.MAX_SPEED)
        {
            SetVelocity(0, Constants.MAX_SPEED);
        }
        else if (this.GetComponent<Rigidbody2D>().velocity.x > Constants.MAX_SPEED)
        {
            SetVelocity(1, Constants.MAX_SPEED);
        }

        if (this.GetComponent<Rigidbody2D>().velocity.y < -Constants.MAX_SPEED)
        {
            SetVelocity(2, Constants.MAX_SPEED);
        }
        else if (this.GetComponent<Rigidbody2D>().velocity.y > Constants.MAX_SPEED)
        {
            SetVelocity(3, Constants.MAX_SPEED);
        }




    }

    //This method increases current velocity with second parameter
    public void GiveVelocity(int direction, float velocity)
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

    //This method set current velocity with second parameter
    public void SetVelocity(int direction, float velocity)
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

    //This method applies force as the second parameter.
    public void GiveForce(int direction, float force)
    {

        if (direction == 0)
        {
            rigidbody2D.AddForce(new Vector2(-force, 0));
        }
        else if (direction == 1)
        {
            rigidbody2D.AddForce(new Vector2(force, 0));
        }
        else if (direction == 2)
        {
            rigidbody2D.AddForce(new Vector2(0, -force));
        }
        else if (direction == 3)
        {
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
