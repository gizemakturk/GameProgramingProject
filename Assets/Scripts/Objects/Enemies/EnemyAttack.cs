using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAttack : Attack
{


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



        if (attack)
        {

            string tag = collision.gameObject.tag;
            if (GiveDamageTag(tag) &&
                !GetComponent<MobMovement>().UpBound.contacts.Contains("Player"))
            {
                Damageability damageability = collision.gameObject.GetComponent<Damageability>();
                AttackWithContact(damageability);
                GetComponent<Movement>().SetVelocity(0, 0);
            }


        }


    }

    protected override bool GiveDamageTag(string tag)
    {
        return tag == "Player";
    }
}
