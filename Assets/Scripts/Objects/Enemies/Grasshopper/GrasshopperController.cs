using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrasshopperController : EnemyController
{


    private Cooldown jumpCooldown;
    [SerializeField]private float jumpCD = 1000;

    // Start is called before the first frame update
    void Start()
    {
        Init();
    }

    // Update is called once per frame
    void FixedUpdate()
    {

        Tick();

    }

    protected new void Tick()
    {
        base.Tick();
        AnimatorMethod();
        
    }

    protected new void Init()
    {
        base.Init();

    }


    public void AnimatorMethod()
    {

        if (!Damageability.Alive)
        {
            Animation.Code = 1;
        }
        else if (!Movement.DownBound.contactWithGround)
        {

            if(Movement.GetVelocity().y>0)
                Animation.Code = 3;
            else
                Animation.Code = 4;

        }
        else
        {

            Animation.Code = 2;

        }
        


    }

    protected override void SetFlags()
    {

        if (dir == 0 && !Movement.OnGround())
        {
            Movement.goLeftFlag = true;
        }
        else if (dir == 1 && !Movement.OnGround())
        {

            Movement.goRightFlag = true;

        }

        if (Movement.OnGround()&&GetjumpCooldown().Control())
        {
            Movement.JumpFlag = true;
        }


    }

    private Cooldown GetjumpCooldown()
    {
        if (jumpCooldown == null)
        {
            jumpCooldown = new Cooldown(jumpCD);
        }

        return jumpCooldown;

    }



}
