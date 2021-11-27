using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAttack : Attack
{


    private DownBound downBound;
    private PlayerMovement playerMovement;
    private PlayerDamageability damageability;

    public void Init()
    {
        base.Init();
        downBound = GetComponentInChildren<DownBound>();
        playerMovement = GetComponent<PlayerMovement>();
        damageability = GetComponent<PlayerDamageability>();
    }



    private void Start()
    {
        Init();
    }
    private void FixedUpdate()
    {
        if (damageability.Alive)
            Tick();
    }

    private void OnTriggerStay2D(Collider2D collision)
    {

        if (!damageability.Alive)
            return;
        

        if (Constants.ContainsList(Constants.GetPlayerGiveDamage(),downBound.contacts))
        {

            string tag = collision.gameObject.tag;
            if (Constants.GetPlayerGiveDamage().Contains(tag))
            {

                Damageability damageability = collision.gameObject.GetComponent<Damageability>();
                if (!damageability.Alive)
                    return;

                AttackWithContact(damageability);
                playerMovement.SetVelocity(3,playerMovement.jump);
                if(damageability.currentHp==0)
                    HUD.UpdateScore(100);
            }


        }


    }

    protected override bool GiveDamageTag(string tag)
    {
        return Constants.GetPlayerGiveDamage().Contains(tag);
    }
}
