/**
javac Aa.java
javac -h . Aa.java

gcc -shared -o libnative.so -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin Aa.c

gcc -o outputfile sourcefile.c
./outputfile
**/
#include <jni.h>
#include <stdio.h>
#include "Aa.h"

// 实现本地方法
JNIEXPORT void JNICALL Java_Aa_sayHello(JNIEnv *env, jobject obj) {
    printf("Hello from C code!\n");
}