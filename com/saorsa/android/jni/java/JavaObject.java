package com.saorsa.android.jni.java;

import java.io.Console;

public class JavaObject {
    public String getHello() { return "Hello"; }
    public void say(String whatToSay) {
        System.out.println(whatToSay);
    }
}
