#include "Hello.h"
#include <jni.h>
#include <iostream>

JNIEXPORT void JNICALL Java_Hello_sayHello (JNIEnv *env, jobject obj) {
  std::cout << "Hello JNI from C++!" << std::endl;
}