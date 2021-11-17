using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GatorController : EnemyController
{

    public int verticalDir;
    public float verticalSpeed;

    public float maxDistance;

    private Vector2 firstPoint;

    protected override void Init()
    {

        base.Init();
        firstPoint = transform.position;
    }

    protected override void Tick()
    {

        base.Tick();

    }


    private void FixedUpdate()
    {
        Tick();
    }

    private void Start()
    {
        Init();
    }


    private readonly float timeFixFinal = 0.2f;
    private float timeFix = 0.2f;

    protected override void BasicAI()
    {
        base.BasicAI();

        timeFix -= Time.deltaTime;
        //print(timeFix);

        if(timeFix<=0 && Mathf.Abs(firstPoint.y-transform.position.y) > maxDistance)
        {

            if (verticalDir == 2)
                verticalDir = 3;
            else if (verticalDir == 3)
                verticalDir = 2;
            timeFix = timeFixFinal;

        }
        

        if (verticalDir== 2)
        {

            if (Attack.attackedFlag || (GetchangeDirectionCooldown().Control() &&
                Constants.ContainsList(Movement.DownBound.contacts, Constants.GetEnemyChangeDirection())))
            {
                verticalDir = 3;
                Attack.attackedFlag = false;
            }

        }
        else if(verticalDir == 3)
        {


            if (Attack.attackedFlag || (GetchangeDirectionCooldown().Control() &&
                Constants.ContainsList(Movement.UpBound.contacts, Constants.GetEnemyChangeDirection())))
            {

                verticalDir = 2;
                Attack.attackedFlag = false;
            }

        }

    }

    protected override void SetFlags()
    {
        base.SetFlags();

        if (verticalDir == 2)
        {
            Movement.SetVelocity(2,verticalSpeed);
        }
        else if (verticalDir == 3)
        {

            Movement.SetVelocity(3, verticalSpeed);

        }

    }



}
