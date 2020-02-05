package com.saorsa.android.jni.java;

public class JniSamples {
    static {
        System.loadLibrary("SampleCLib");
    }
    private native void sayHello();
    private native String concatenate(String left, String right);
    private native String getHello(JavaObject instance);
    private native void useJavaObject(JavaObject instance);
    public void Go() {
        sayHello();
        System.out.println(concatenate("Hello ", "JNI!"));
    }
}


