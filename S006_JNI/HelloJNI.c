#include <jni.h>
#include <stdio.h>
#include "HelloJNI.h"
 
JNIEXPORT double JNICALL Java_HelloJNI_sayHello(JNIEnv *env, jobject thisObj,jint n1) {
  printf("Hello World! %i\n", n1);
  return (jdouble) n1+2;
} 
