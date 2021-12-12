using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class DBController : MonoBehaviour
{
    
    
    public InputField name;
    public TMP_Text scoreLabel;

    public static string leaderBoard="";

    private void Start()
    {
        scoreLabel.text = StaticVariables.PlayerScore.ToString();
    }

    public void LoadLeaderBoard()
    {
        
        StartCoroutine(LoadScores());
    }

    public void SaveScoreButton()
    {
        StartCoroutine(SaveScore(name.text,StaticVariables.PlayerScore));
    }

    public IEnumerator SaveScore(string userName, int score)
    {
        WWWForm form = new WWWForm();
        form.AddField("unity", "Save_Score");
        form.AddField("userName", userName);
        form.AddField("score", score);

        using (UnityWebRequest www = UnityWebRequest.Post("ozantekce.com/userRegister.php", form))
        {
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log("Form upload complete!");
                Debug.Log("\n"+www.downloadHandler.text);
            }

        }

        IEnumerator coroutine = WaitAndLoad(0.1f);
        StartCoroutine(coroutine);

    }


    public IEnumerator LoadScores()
    {
        WWWForm form = new WWWForm();
        form.AddField("unity", "Load_Scores");

        using (UnityWebRequest www = UnityWebRequest.Post("http://www.ozantekce.com/userRegister.php", form))
        {
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);
            }
            else
            {

                Debug.Log("Form upload complete!");
                string data = www.downloadHandler.text;
                data = data.Replace("|", "\t");
                data = data.Replace("*", "\n");
                Debug.Log("\n" + data);
                leaderBoard = data;

            }

        }


    }



    private IEnumerator WaitAndLoad(float wait)
    {
        yield return new WaitForSeconds(wait);
        SceneManager.LoadScene(CONSTANTS.MAINMENU_SCENE_INDEX);
    }


}
