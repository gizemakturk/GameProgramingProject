using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class InfoScene : MonoBehaviour
{


    private static string info;
    private static int go;
    private static float wait;



    public static string Info { get => info; set => info = value; }
    public static int Go { get => go; set => go = value; }
    public static float Wait { get => wait; set => wait = value; }





    // Start is called before the first frame update
    IEnumerator Start()
    {

        TMP_Text infoLabel = GetComponentInChildren<TMP_Text>();
        infoLabel.text = info;

        yield return new WaitForSeconds(wait);
        SceneManager.LoadScene(go);


    }




}
