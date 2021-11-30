using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDamageability : Damageability
{

    public static bool ChangeHp { get => changeHp; set => changeHp = value; }

    private static bool changeHp;

    public void Start()
    {

        base.Start();

    }


    public void FixedUpdate()
    {
        if (changeHp)
        {
            currentHp = StaticVariables.PlayerCurrentHP;
            changeHp = false;
        }

        base.FixedUpdate();

    }


    public override void TakeDamage(int val)
    {

        base.TakeDamage(val);
        StaticVariables.PlayerCurrentHP = currentHp;

    }




}

