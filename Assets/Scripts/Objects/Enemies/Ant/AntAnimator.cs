using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AntAnimator : Animation
{
    protected override void AnimatorContor(int code)
    {
        if (code == 1)
        {
            this.animator.SetTrigger("hurt");
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
