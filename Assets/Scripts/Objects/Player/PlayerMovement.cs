using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MobMovement
{

    // Start is called before the first frame update
    void Start()
    {
        Init();
    }


    void FixedUpdate()
    {
        
        Tick();
    }


}
