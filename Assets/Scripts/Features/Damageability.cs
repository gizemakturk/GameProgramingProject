using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Damageability :MonoBehaviour, Feature
{


    //--------Attributes-------------
    public int maxHp = 3;
    public int currentHp = 3;
    //---------------------------------


    private bool alive = true;



    //----Flags-----

    public bool damagedFlag;
    public bool damagedFlag2;


    //---------



    public void Init()
    {

    }

    public void Tick()
    {
        ControlAlive();
    }

    private void Start()
    {

        Init();

    }

    private void FixedUpdate()
    {

        Tick();

    }


    public float waitForDestroy = 10f;
    private void ControlAlive()
    {

        if (this.currentHp <= 0)
        {
            alive = false;
            waitForDestroy -= Time.deltaTime;
            if(GetComponent<Collider2D>() != null)
            {
                GetComponent<Collider2D>().isTrigger = true;
            }
            if (waitForDestroy <= 0)
            {
                // deðiþmeli buranýn iþi deðil
                if(this.gameObject.tag!="Player")
                    Destroy(this.gameObject);
                else
                {
                    SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
                    PlayerController.CurrentHp = this.maxHp;
                }
                    
            }
                
            return;
        }

    }


    public void TakeDamage(int val) {

        if (val <= 0)
        {
            alive = false;
            return;
        }
        currentHp -= val;
        damagedFlag = true;
        damagedFlag2 = true;

    }



    //------------Get-Set-----------

    public int CurrentHp { get => currentHp; set => currentHp = value; }
    public int MaxHp { get => maxHp; set => maxHp = value; }
    public bool Alive { get => alive; set => alive = value; }
    public bool Alive1 { get => alive; set => alive = value; }

    //------------------------------


}
