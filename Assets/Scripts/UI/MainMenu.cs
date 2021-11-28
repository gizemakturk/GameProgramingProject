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


    private void Start()
    {
        sound.value = HUD.sound;
    }



    public void StartGame() {

        InfoScene.Info = "Level 1";
        InfoScene.Go = 1;
        InfoScene.Wait = 1.5f;
        SceneManager.LoadScene(Constants.INFO_SCENE());
        
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
    



}
