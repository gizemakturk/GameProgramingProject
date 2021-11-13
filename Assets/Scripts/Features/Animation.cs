using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Animation : MonoBehaviour, Feature
{

    protected Animator animator;

    private int code;

    public int Code { get => code; set => code = value; }

    public void Init()
    {
        animator = GetComponent<Animator>();
    }


    public void Tick()
    {

        AnimatorContor(code);

    }


    protected abstract void AnimatorContor(int code);
    



}
