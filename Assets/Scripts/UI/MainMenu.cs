using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    public TMP_Text infoLabel;

    public GameObject mainMenu;
    public GameObject options;
    public GameObject leaderboard;
        public TMP_Text leaderboardLabel;
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
        leaderboard.SetActive(false);
        mainMenu.SetActive(true);
        
    }
    
    public void Options()
    {

        options.SetActive(true);
        mainMenu.SetActive(false);

    }

    public void LeaderBoardButton()
    {

        leaderboard.SetActive(true);
        mainMenu.SetActive(false);
        LoadLeaderBoard();

    }

    public static void SetSound(Slider slider)
    {

        StaticVariables.Sound = slider.value;

    }

    public void LoadLeaderBoard()
    {

        StartCoroutine(LoadScores());
    }
    public IEnumerator LoadScores()
    {
        WWWForm form = new WWWForm();
        form.AddField("unity", "Load_Scores");

        using (UnityWebRequest www = UnityWebRequest.Post("ozantekce.com/userRegister.php", form))
        {
            yield return www.SendWebRequest();

            float timer = 0;
            while (timer < 300)
            {
                
                timer += Time.deltaTime;
                
            }

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);
                infoLabel.text = www.error;
            }
            else
            {

                Debug.Log("Form upload complete!");
                string data = www.downloadHandler.text;
                data = data.Replace("*", "\n");
                data = data.Replace("|", "\t");
                Debug.Log("\n" + data);

                infoLabel.text = data;
                leaderboardLabel.text = data;

            }

        }


    }



    public InputField score;

    public void Send()
    {



        StaticVariables.PlayerCurrentHP = 3;
        InfoScene.InfoText = "Level 1";
        InfoScene.NextSceneIndex = 1;
        InfoScene.WaitTime = 1.5f;
        StaticVariables.PlayerScore = int.Parse(score.text);
        IEnumerator coroutine = WaitAndLoad(0.4f,CONSTANTS.SENDSCORE_SCENE_INDEX);
        StartCoroutine(coroutine);


    }



}
