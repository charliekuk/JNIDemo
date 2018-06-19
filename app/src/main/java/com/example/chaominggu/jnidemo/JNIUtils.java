package com.example.chaominggu.jnidemo;

/**
 * Created by ChaomingGu on 2018/6/19.
 */

public class JNIUtils {
    static {
        System.loadLibrary("JNIHello");
    }
    public static native String sayHelloFromJNI();
}
