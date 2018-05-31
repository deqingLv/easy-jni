#include "../include/io_yushan_HelloWorld.h"
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
using std::ifstream;
using std::ios;
using std::string;

JNIEXPORT void JNICALL Java_io_yushan_HelloWorld_sayHello
  (JNIEnv *env, jobject object) {
    printf("Hello World!");
    return;
}

JNIEXPORT jbyteArray JNICALL Java_io_yushan_HelloWorld_readBytes
  (JNIEnv *env, jobject object, jstring str) {
    int length = 1024;
    char* tileBytes = new (std::nothrow) char[length];
    for(int i = 0; i < 1024; i++) {
        tileBytes[i] = ' ';
    }

    jbyteArray byteArray = env->NewByteArray(length);
    env->SetByteArrayRegion(byteArray, 0, length, (jbyte*)tileBytes);
//    delete[] tileBytes;
    tileBytes = NULL;
    return byteArray;

 }