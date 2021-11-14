using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrapAttack : Attack
{
    protected override bool GiveDamageTag(string tag)
    {
        return tag == "Player";
    }

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


    private void OnTriggerStay2D(Collider2D collision)
    {



        if (active)
        {

            string tag = collision.gameObject.tag;
            if (GiveDamageTag(tag))
            {
                Damageability damageModule = collision.gameObject.GetComponent<Damageability>();
                AttackWithContact(damageModule);
            }


        }


    }



    protected void AttackWithContact(Damageability destination)
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
                

            movement.SetVelocity(3, tossingUp);

        }
        else
        {

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
                

            movement.SetVelocity(3, tossingUp);


        }



    }


}
