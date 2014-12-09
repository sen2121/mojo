// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/android/base_jni_registrar.h"
#include "base/android/jni_android.h"
#include "base/android/jni_registrar.h"
#include "base/android/library_loader/library_loader_hooks.h"
#include "base/logging.h"
#include "net/android/net_jni_registrar.h"
#include "services/native_viewport/platform_viewport_android.h"
#include "shell/android/android_handler.h"
#include "shell/android/mojo_main.h"

namespace {

base::android::RegistrationMethod kMojoRegisteredMethods[] = {
    {"AndroidHandler", mojo::RegisterAndroidHandlerJni},
    {"MojoMain", mojo::RegisterMojoMain},
    {"PlatformViewportAndroid", mojo::PlatformViewportAndroid::Register},
};

bool RegisterMojoJni(JNIEnv* env) {
  return RegisterNativeMethods(env, kMojoRegisteredMethods,
                               arraysize(kMojoRegisteredMethods));
}

}  // namespace

// This is called by the VM when the shared library is first loaded.
JNI_EXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
  base::android::InitVM(vm);
  JNIEnv* env = base::android::AttachCurrentThread();

  if (!base::android::RegisterLibraryLoaderEntryHook(env))
    return -1;

  if (!base::android::RegisterJni(env))
    return -1;

  if (!net::android::RegisterJni(env))
    return -1;

  if (!RegisterMojoJni(env))
    return -1;

  if (!mojo::RegisterAndroidHandlerJni(env))
    return -1;

  return JNI_VERSION_1_4;
}