/* Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once
#ifdef ANDROID
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif
namespace paddle_mobile {
namespace jni {
/**
 * load model & params of the net for android
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_paddle_PML_load(JNIEnv *env,
                                                          jclass thiz,
                                                          jstring modelPath);

/**
 * object detection for anroid
 */
JNIEXPORT jfloatArray JNICALL
Java_com_baidu_paddle_PML_predict(JNIEnv *env, jclass thiz, jfloatArray buf);

/**
 * clear data of the net when destroy for android
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_PMLL_clear(JNIEnv *env,
                                                        jclass thiz);
}  // namespace jni
}  // namespace paddle_mobile
#ifdef __cplusplus
}
#endif

#endif
