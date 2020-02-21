#include "com_zzr_ndkdemo_MyNdk.h"

JNIEXPORT jstring JNICALL Java_com_zzr_ndkdemo_MyNdk_getString
  (JNIEnv * env, jobject obj){
   return (*env).NewStringUTF("This is mylibrary !!!");
  }
JNIEXPORT jstring JNICALL Java_com_zzr_ndkdemo_MyNdk_getMyString
  (JNIEnv * env, jobject obj){
   return (*env).NewStringUTF("getMyString success !!!");
  }