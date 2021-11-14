using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Attack :MonoBehaviour, Feature
{



    //---------Attributes--------------
    public bool active = true;
    public float tossing;
    public float tossingUp;
    public int attackPower;
    public float cooldown = 1000;
    //---------------------------------



    //---------Cooldowns------------------

    private Cooldown attackCooldown;

    //-----------------------------------


    //---------Flags--------------------

    public bool attackedFlag;

    //----------------------------------


    public void Init()
    {
        attackCooldown = new Cooldown(cooldown);
    }

    public void Tick()
    {

    }

    private void Start()
    {

        Init();

    }



    private void FixedUpdate()
    {
        Tick();
    }


    private void OnTriggerStay2D(Collider2D collision)
    {



        if (!active)
            return;

        string tag = collision.gameObject.tag;
        if (GiveDamageTag(tag))
        {
            Damageability damageability = collision.gameObject.GetComponent<Damageability>();
            AttackWithContact(damageability);
        }


    }


    // This method check that it can attack the parameter
    protected abstract bool GiveDamageTag(string tag);

    // This method does damage to destination
    protected virtual void AttackWithContact(Damageability destination)
    {

        if (GetAttackCooldown().Control())
        {

            destination.TakeDamage(attackPower);

            MobMovement movement = destination.gameObject.GetComponent<MobMovement>();
            float temp = this.transform.position.x - movement.transform.position.x;

            if (temp > 0)
            {
                movement.SetVelocity(0, tossing);
            }
            else
            {
                movement.SetVelocity(1, tossing);

            }

            movement.SetVelocity(3,tossingUp);
            attackedFlag = true;
        }
            


    }


    //----------Get-Set----------

    protected Cooldown GetAttackCooldown()
    {
        if (attackCooldown == null)
        {
            attackCooldown = new Cooldown(cooldown);
        }

        return attackCooldown;

    }

    //-----------------------------



}
