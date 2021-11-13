using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrasshopperAnimator : Animation
{
    protected override void AnimatorContor(int code)
    {

        if (code == 1)
        {

            this.animator.SetTrigger("hurt");

        }
        else if(code == 2)
        {

            this.animator.SetTrigger("idle");

        }
        else if(code == 3)
        {

            this.animator.SetTrigger("jump");

        }
        else if (code == 4)
        {

            this.animator.SetTrigger("fall");

        }

    }

    void Start()
    {
        Init();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        Tick();
    }
}
