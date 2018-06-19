//
// Created by ChaomingGu on 2018/6/19.
//

#include "com_example_chaominggu_jnidemo_JNIUtils.h"
JNIEXPORT jstring JNICALL Java_com_example_chaominggu_jnidemo_JNIUtils_sayHelloFromJNI(JNIEnv *env, jclass jclass){
    return env->NewStringUTF("Hello World From JNI!!!");
}