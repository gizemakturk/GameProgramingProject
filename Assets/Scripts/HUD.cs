using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class HUD : MonoBehaviour
{

    
    public static int CurrentHp = 3;
    public static int Score=0;


    // Methods are defined static to use without object of hub
    // Unity don't allow static variables set in Unity
    // Therefore, static variables set in Start with non static variables
    public static Image hpBarBase;
    public static Canvas PopUpMenu;
    public static TMP_Text timeLabel;
    public static TMP_Text scoreLabel;
    public static Canvas Settings;
    public static Canvas Menu;


    public Image hpBarBaseTemp;
    public Canvas PopUpMenuTemp;
    public TMP_Text timeLabelTemp;
    public TMP_Text scoreLabelTemp;
    public Canvas SettingsTemp;
    public Canvas MenuTemp;


    // Store sound
    public static float sound;


    public int maxTime=60;
    private int currentTime=0;

    // Store start time of current scene
    private float startTime;


    

    private void Start()
    {
        PopUpMenu = PopUpMenuTemp;
        PopUpMenu.enabled = false;

        Settings = SettingsTemp;
        Settings.enabled = false;

        Menu = MenuTemp;
        Menu.enabled = false;

        hpBarBase = hpBarBaseTemp;
        timeLabel = timeLabelTemp;
        timeLabel.text = maxTime.ToString();

        scoreLabel = scoreLabelTemp;
        scoreLabel.text = Score.ToString();



        startTime = Time.realtimeSinceStartup;

        GetComponentInChildren<Slider>().value = sound;

    }


    private void FixedUpdate()
    {
        // If the time is over, the player dies
        if (ControlMaxTime())
        {
            PlayerController.Kill = true;
            
        }
        else
        {
            UpdateTime();
        }

    }

    

    private int nextTime = 0;

    // Update time label with Time.realtimeSinceStartup - startTime if reaches next int value
    private void UpdateTime()
    {

        float time = Time.realtimeSinceStartup - startTime;
        
        if (time >= nextTime + 1)
        {

            currentTime = nextTime;
            timeLabel.text = (maxTime-currentTime).ToString();
            nextTime++;

        }



    }

    // Increase score with parameter and update scoreLabel
    public static void UpdateScore(int score)
    {
        Score += score;
        scoreLabel.text = Score.ToString();

    }

    // Set score with parameter and update scoreLabel
    public static void SetScore(int score)
    {
        Score = score;
        scoreLabel.text = Score.ToString();

    }

    // Control time
    private bool ControlMaxTime()
    {
        return maxTime <= currentTime;
    } 



    // Load MainMenu Sceen
    public static void MainMenu()
    {

        SceneManager.LoadScene(0);
        Time.timeScale = 1;
    }

    // Resume Current Sceen
    public static void Resume()
    {

        PopUpMenu.enabled = false;
        Settings.enabled = false;
        Time.timeScale = 1;

    }

    // Set visible Settings and hide Menu
    public static void Setting()
    {

        Settings.enabled = true;
        Menu.enabled = false;

    }

    // Set visible Menu and hide Settings
    public static void Apply()
    {

        Settings.enabled = false;
        Menu.enabled = true;

    }

    // When esc is pressed, If PopUpMenu is active , resume game else set PopUpMenu is visible
    public static void PopUpMenuControl()
    {
        
        PopUpMenu.enabled = !PopUpMenu.enabled;
        Menu.enabled = true;
        Settings.enabled = false;
        if (PopUpMenu.enabled)
            Time.timeScale = 0;
        else
            Time.timeScale = 1;

    }


    // Up hpbar with max and current hp
    public static void UpdateHpBar(Damageability damageability)
    {
        
        int pix = 32;
        int mHp = damageability.MaxHp;
        int w = pix * mHp;
        hpBarBase.rectTransform.sizeDelta = new Vector2(w, 32);

        int cHp = damageability.CurrentHp;
        w = pix * cHp;
        Image hpBar = hpBarBase.GetComponentsInChildren<Image>()[1];
        hpBar.rectTransform.sizeDelta = new Vector2(w, 32);


    }


    // Sound set with slider.value
    public static void Sound(Slider slider)
    {

        sound = slider.value;

    }


}
