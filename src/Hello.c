#include "Hello.h"
#include <jni.h>
#include <stdio.h>

JNIEXPORT void JNICALL Java_Hello_sayHello (JNIEnv *env, jobject obj) {
  printf("Hello JNI!\n");
}