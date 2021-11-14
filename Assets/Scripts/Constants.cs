using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Constants
{


    //limitations
    public readonly static float MAX_SPEED = 10;



    //layers


    //tags
    public readonly static string playerTag = "Player";
    public readonly static string groundTag = "Ground";
    public readonly static string antTag = "Ant";
    public readonly static string glasshopperTag = "Glasshooper";
    public readonly static string changeDirectionTag = "ChangeDirection";



    private static ArrayList EnemyChangeDirection;

    private static ArrayList PlayerGiveDamage;

    public static ArrayList GetEnemyChangeDirection()
    {

        if (EnemyChangeDirection != null)
        {
            return EnemyChangeDirection;
        }
        else {

            EnemyChangeDirection = new ArrayList();
            EnemyChangeDirection.Add(groundTag);
            EnemyChangeDirection.Add(changeDirectionTag);
            EnemyChangeDirection.Add(antTag);
            EnemyChangeDirection.Add(glasshopperTag);
            return EnemyChangeDirection;

        }

    }

    public static ArrayList GetPlayerGiveDamage()
    {
        if (PlayerGiveDamage != null)
        {
            return PlayerGiveDamage;
        }
        else
        {

            PlayerGiveDamage = new ArrayList();
            PlayerGiveDamage.Add(antTag);
            PlayerGiveDamage.Add(glasshopperTag);

            return PlayerGiveDamage;

        }
    }


    public static bool ContainsList(ArrayList list,ArrayList list2)
    {

        for(int i = 0; i < list2.Count; i++)
        {

            if (list.Contains(list2[i]))
                return true;

        }

        return false;

    }



}
