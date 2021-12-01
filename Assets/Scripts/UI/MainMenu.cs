using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{

    public GameObject mainMenu;
    public GameObject options;
    public Slider sound;

    // set sound value with static value in HUD
    private void Start()
    {
        sound.value = StaticVariables.Sound;
    }


    // Load info scene then info scene load level 1
    public void StartGame() {

        

        StaticVariables.PlayerCurrentHP = 3;
        InfoScene.InfoText = "Level 1";
        InfoScene.NextSceneIndex = 1;
        InfoScene.WaitTime = 1.5f;
        IEnumerator coroutine = WaitAndLoad(0.4f, CONSTANTS.INFO_SCENE_INDEX);
        StartCoroutine(coroutine);


    }

    private IEnumerator WaitAndLoad(float wait,int next)
    {
        yield return new WaitForSeconds(wait);
        SceneManager.LoadScene(next);
    }

    public void ExitGame() {

        Application.Quit();

    }


    public void Apply() {

        options.SetActive(false);
        mainMenu.SetActive(true);
        
    }
    
    public void Options()
    {

        options.SetActive(true);
        mainMenu.SetActive(false);

    }


    public static void SetSound(Slider slider)
    {

        StaticVariables.Sound = slider.value;

    }


}
