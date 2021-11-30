using UnityEngine.UI;

public static class StaticVariables
{

    
    private static int playerCurrentHP = 3;
    private static int playerScore=0;
    private static float sound;

    public static int PlayerCurrentHP { get => playerCurrentHP; set => playerCurrentHP = value; }
    public static int PlayerScore { get => playerScore; set => playerScore = value; }
    public static float Sound { get => sound; set => sound = value; }


    public static void ChangeHp(int val)
    {

        playerCurrentHP = val;
        PlayerDamageability.ChangeHp = true;

    }


}
