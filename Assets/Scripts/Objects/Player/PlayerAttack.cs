using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAttack : Attack
{


    private DownBound downBound;
    private PlayerMovement playerMovement;

    public void Init()
    {
        base.Init();
        downBound = GetComponentInChildren<DownBound>();
        playerMovement = GetComponent<PlayerMovement>();

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
        

        if (Constants.ContainsList(Constants.GetPlayerGiveDamage(),downBound.contacts))
        {

            string tag = collision.gameObject.tag;
            if (Constants.GetPlayerGiveDamage().Contains(tag))
            {

                Damageability damageability = collision.gameObject.GetComponent<Damageability>();
                AttackWithContact(damageability);
                playerMovement.SetVelocity(3,playerMovement.jump);

            }


        }


    }

    protected override bool GiveDamageTag(string tag)
    {
        return Constants.GetPlayerGiveDamage().Contains(tag);
    }
}
