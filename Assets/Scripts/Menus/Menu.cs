using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{

    public GameObject mainMenu;
    public GameObject options;

    public void StartGame() {

        SceneManager.LoadScene(1);
        
        
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


    public void Load() {

        Debug.Log(" not working ");

    }





}
