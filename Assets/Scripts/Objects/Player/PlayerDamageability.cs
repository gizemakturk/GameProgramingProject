using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDamageability : Damageability
{




    private void Start()
    {
        Init();

    }


    private void FixedUpdate()
    {
        Tick();
    }






}

