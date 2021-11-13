using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class EnemyController : Controller
{


    private MobMovement movement;
    private Damageability damageability;
    private Animation animation;
    private Attack attack;


    private int direction;
    private Cooldown changeDirectionCooldown;
    public int dir = 0;

    public MobMovement Movement { get => movement; set => movement = value; }
    public Damageability Damageability { get => damageability; set => damageability = value; }
    public Animation Animation { get => animation; set => animation = value; }
    public Attack Attack { get => attack; set => attack = value; }

    protected new void Init()
    {

        movement = GetComponent<MobMovement>();
        damageability = GetComponent<Damageability>();
        animation = GetComponent<Animation>();
        attack = GetComponent<EnemyAttack>();


    }

    protected new void Tick()
    {

        if (!damageability.Alive)
        {
            GetComponent<Rigidbody2D>().constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezePositionY;

            animation.Code = 1;
            attack.attack = false;
            movement.goLeftFlag = false;
            movement.goRightFlag = false;
            return;
        }
        BasicAI();
        SetFlags();

    }


    private void Start()
    {
        
        Init();



    }

    private void FixedUpdate()
    {
        Tick();
    }


    // basic AI
    private void BasicAI()
    {


        if (movement.Direction == 0)
        {

            if (attack.attackedFlag ||(GetchangeDirectionCooldown().Control() &&
                Constants.ContainsList(movement.LeftBound.contacts, Constants.GetEnemyChangeDirection())))
            {

                dir = 1;
                attack.attackedFlag = false;
            }

        }
        else
        {


            if (attack.attackedFlag || (GetchangeDirectionCooldown().Control() &&
                Constants.ContainsList(movement.RightBound.contacts, Constants.GetEnemyChangeDirection())))
            {

                dir = 0;
                attack.attackedFlag = false;
            }

        }


    }

    protected virtual void SetFlags()
    {

        if (dir == 0)
        {
            movement.goLeftFlag = true;
        }
        else if (dir == 1)
        {

            movement.goRightFlag = true;

        }

    }



    private Cooldown GetchangeDirectionCooldown()
    {
        if (changeDirectionCooldown == null)
        {
            changeDirectionCooldown = new Cooldown(10);
        }

        return changeDirectionCooldown;

    }

}
