/**
javac NativeMethodExample.java
javac -h . NativeMethodExample.java

gcc -shared -o libnative.so -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin NativeMethodExample.c

gcc -o outputfile sourcefile.c
./outputfile
**/
#include <jni.h>
#include <stdio.h>
#include "NativeMethodExample.h"

// 实现本地方法
JNIEXPORT void JNICALL Java_NativeMethodExample_sayHello(JNIEnv *env, jobject obj) {
    printf("Hello from C code!\n");
}