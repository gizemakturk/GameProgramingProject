using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimation : Animation
{


    private PlayerController playerController;


    //------CDs----------
    private Cooldown blinkCooldown;
    //--------------------


    private void Start()
    {
        Init();
        playerController = GetComponent<PlayerController>();
    }

    private void FixedUpdate()
    {

        Tick();

        if (playerController.Damageability.damagedFlag)
        {
            Blink();
        }


    }


    

    // This method blink player when it get damage
    private void Blink()
    {

        if (!GetBlinkCooldown().Control())
        {

            GetComponent<SpriteRenderer>().color = new Color(1f, 0f, 0f, 1f);
        }
        else
        {
            blinkCooldown = null;
            GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
            playerController.Damageability.damagedFlag = false;
        }

    }



    // idle : 0 | run : 1 | jump : 2 | hurt : 4
    protected override void AnimatorContor(int code)
    {
        if(code == 4)
        {
            this.animator.ResetTrigger("idle");
            this.animator.ResetTrigger("run");
            this.animator.ResetTrigger("jump");
            this.animator.SetTrigger("hurt");
        }
        else if (code == 2)
        {

            this.animator.ResetTrigger("idle");
            this.animator.ResetTrigger("run");
            this.animator.SetTrigger("jump");
            this.animator.ResetTrigger("hurt");

        }
        else if (code == 1)
        {
            this.animator.ResetTrigger("idle");
            this.animator.SetTrigger("run");
            this.animator.ResetTrigger("jump");
            this.animator.ResetTrigger("hurt");
        }
        else if (code == 0)
        {

            this.animator.SetTrigger("idle");
            this.animator.ResetTrigger("run");
            this.animator.ResetTrigger("jump");
            this.animator.ResetTrigger("hurt");
        }

    }


    private Cooldown GetBlinkCooldown()
    {
        if (blinkCooldown == null)
        {
            blinkCooldown = new Cooldown(1000);
        }

        return blinkCooldown;

    }


}
