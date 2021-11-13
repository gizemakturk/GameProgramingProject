using System.Diagnostics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class Cooldown
{


    private float cooldown;

    private Stopwatch stopwatch = new Stopwatch();


    public Cooldown(float cooldown)
    {
        SetCooldown(cooldown);
        stopwatch.Start();
    }
    public void SetCooldown(float cooldown)
    {

        this.cooldown = cooldown;

    }

    public bool Control()
    {

        if (ElapsedTime() >= cooldown)
        {
            stopwatch.Restart();
            return true;
        }
        else
        {

            return false;

        }

        
    }



    private float ElapsedTime()
    {

        stopwatch.Stop();
        float et = stopwatch.ElapsedMilliseconds;
        stopwatch.Start();
        return et;

    }

}
