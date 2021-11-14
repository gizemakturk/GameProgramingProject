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

    // This method control that this is still alive or not. If not it will destroy this.
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

    // This method decreases current hp.
    public void TakeDamage(int val) {

        if (val <= 0)
        {
            alive = false;
            return;
        }
        currentHp -= val;
        damagedFlag = true;

    }



    //------------Get-Set-----------

    public int CurrentHp { get => currentHp; set => currentHp = value; }
    public int MaxHp { get => maxHp; set => maxHp = value; }
    public bool Alive { get => alive; set => alive = value; }

    //------------------------------


}
