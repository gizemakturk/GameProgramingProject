using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MobMovement : Movement
{


    //----------Attributes-------------
    public float maxVelocity;
    public float jump;
    [SerializeField]private float jumpCD = 300; // cannot change dynamic
    public float minSpeed;
    //---------------------------------




    //---------Control Parameters----------------------------------

    private int direction;
    
    public bool goLeftFlag;     //  a controller set this flag if it wants to go left
    public bool goRightFlag;    //  a controller set this flag if it wants to go right
    public bool jumpFlag;       //  a controller set this flag if it wants to jump


    //---------------------------------------------------------------



    //  Bounds are used for understand interactions
    //-----Bounds-------
    private Bound leftBound;    
    private Bound rightBound;   
    private Bound upBound;  
    private Bound downBound;
    //---------------------


    //----Cooldowns-------- 
    // player must wait to jump until jumpCD
    private Cooldown jumpCooldown;
    //---------------------                          





    private void Start()
    {

        Init();

    }

    private void FixedUpdate()
    {

        Tick();

    }

    protected new void Init()
    {

        base.Init();
        jumpCooldown = new Cooldown(jumpCD);
        
        leftBound = GetComponentInChildren<LeftBound>();
        rightBound = GetComponentInChildren<RightBound>();
        upBound = GetComponentInChildren<UpBound>();
        downBound = GetComponentInChildren<DownBound>();

    }

    protected new void Tick()
    {

        Move();
        base.Tick();

    }
    

    public bool secondJump = false;

    // sometimes it gets stuck on the walls, it is fixer for it
    private float fixer2=0.02f;


    // This method execute flags
    public void Move()
    {

        //------------------Fix----------------------------
        /*
        if (!OnGround() && (leftBound.contactWithGround || rightBound.contactWithGround))
        {
            if(GetVelocity().y==0 && leftBound.contactWithGround)
                transform.position = new Vector2(transform.position.x + fixer2, transform.position.y);
            if (GetVelocity().y == 0 && rightBound.contactWithGround)
                transform.position = new Vector2(transform.position.x - fixer2, transform.position.y);
        }
        */
        //-------------------------------------------------


        if (!OnGround())
        {
            ExtraFriction = friction;
        }
        else
        {
            ExtraFriction = 0;
        }


        if (goLeftFlag)
        {

            GoLeft();

        }

        if (goRightFlag)
        {
            GoRight();
            
        }


        if (CanJump())
        {
            Jump();
        }


        ArrangeScale(direction);


    }

    // This method execute goLeftFlag
    private void GoLeft()
    {

        if (leftBound.contactWithGround || GetVelocity().x < -maxVelocity)
        {
            goLeftFlag = false;
            direction = 0;
            return;
        }


        if (GetVelocity().x > -minSpeed && GetVelocity().x <= 0)
        {
            SetVelocity(0,minSpeed);
        }

        GiveForce(0,this.acceleration);
        direction = 0;
        goLeftFlag = false;

    }


    //// This method execute goRightFlag
    private void GoRight()
    {

        if (rightBound.contactWithGround || GetVelocity().x > maxVelocity)
        {

            goRightFlag = false;
            direction = 1;
            return;
        }


        
        if (GetVelocity().x < minSpeed && GetVelocity().x>=0)
        {
            SetVelocity(1, minSpeed);
        }

        GiveForce(1, this.acceleration);
        direction = 1;
        goRightFlag = false;

    }

    // This method check that jump request is valid
    private bool CanJump()
    {

        if ((jumpFlag && this.OnGround() && GetJumpCooldown().Control()))
        {
            secondJump = true;
            return true;
        }
        else if(secondJump && jumpFlag && GetJumpCooldown().Control()) {

            secondJump = false;
            return true;
        }
        else
        {

            return false;

        }

    }

    // This method execute jumpFlag
    private void Jump()
    {

        if (GetVelocity().y==0)
            SetVelocity(3,this.jump);
        else
            SetVelocity(3,this.jump / 1.2f);

        jumpFlag = false;


    }

    // This method arrange correct scale for direction
    private void ArrangeScale(int direction)
    {


        if (direction == 0)
        {
            if (this.transform.localScale.x > 0)
            {

                this.transform.localScale = new Vector2(-1 * this.transform.localScale.x, this.transform.localScale.y);


                Vector2 posLeft = this.leftBound.transform.position;
                Vector2 posRight = this.rightBound.transform.position;

                this.leftBound.transform.position = posRight;
                this.rightBound.transform.position = posLeft;



            }

        }
        else if (direction == 1)
        {

            if (this.transform.localScale.x < 0)
            {

                this.transform.localScale = new Vector2(-1 * this.transform.localScale.x, this.transform.localScale.y);


                Vector2 posLeft = this.leftBound.transform.position;
                Vector2 posRight = this.rightBound.transform.position;

                this.leftBound.transform.position = posRight;
                this.rightBound.transform.position = posLeft;


            }

        }

    }


    // This method check that downBound is connecting With Ground
    public bool OnGround()
    {
        return downBound.contactWithGround;

    }


    //---------GetterSetter-------------

    public bool GoLeftFlag { get => goLeftFlag; set => goLeftFlag = value; }
    public bool GoRightFlag { get => goRightFlag; set => goRightFlag = value; }
    public bool JumpFlag { get => jumpFlag; set => jumpFlag = value; }
    public int Direction { get => direction; set => direction = value; }
    public Bound UpBound { get => upBound; set => upBound = value; }
    public Bound RightBound { get => rightBound; set => rightBound = value; }
    public Bound LeftBound { get => leftBound; set => leftBound = value; }
    public Bound DownBound { get => downBound; set => downBound = value; }


    private Cooldown GetJumpCooldown()
    {
        if (jumpCooldown == null)
        {
            jumpCooldown = new Cooldown(jumpCD);
        }

        return jumpCooldown;

    }
    //---------------------------------------

}
