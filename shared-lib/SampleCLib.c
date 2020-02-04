#include <jni.h>
#include <stdio.h>
#include <com_saorsa_android_jni_java_JniSamples.h>

/*
 * Class:     com_saorsa_android_jni_java_JniSamples
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_saorsa_android_jni_java_JniSamples_sayHello
  (JNIEnv *env, jobject thisObj) {
      
  }

/*
 * Class:     com_saorsa_android_jni_java_JniSamples
 * Method:    concatenate
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_saorsa_android_jni_java_JniSamples_concatenate
  (JNIEnv *env, jobject thisObj, jstring left, jstring right) {
      
  };

/*
 * Class:     com_saorsa_android_jni_java_JniSamples
 * Method:    getHello
 * Signature: (Lcom/saorsa/android/jni/java/JavaObject;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_saorsa_android_jni_java_JniSamples_getHello
  (JNIEnv *env, jobject thisObj, jobject javaObject) {

  };

/*
 * Class:     com_saorsa_android_jni_java_JniSamples
 * Method:    useJavaObject
 * Signature: (Lcom/saorsa/android/jni/java/JavaObject;)V
 */
JNIEXPORT void JNICALL Java_com_saorsa_android_jni_java_JniSamples_useJavaObject
  (JNIEnv *env, jobject thisObj, jobject javaObject) {

  };
