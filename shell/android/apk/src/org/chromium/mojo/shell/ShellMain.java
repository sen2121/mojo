// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.mojo.shell;

import android.app.Activity;
import android.content.Context;
import android.util.Log;

import org.chromium.base.CalledByNative;
import org.chromium.base.JNINamespace;

import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * A placeholder class to call native functions.
 **/
@JNINamespace("shell")
public class ShellMain {
    private static final String TAG = "ShellMain";

    // Directory where applications bundled with the shell will be extracted.
    private static final String LOCAL_APP_DIRECTORY = "local_apps";
    // Individual applications bundled with the shell as assets.
    private static final String NETWORK_LIBRARY_APP = "network_service.mojo";
    // Directory where the child executable will be extracted.
    private static final String CHILD_DIRECTORY = "child";
    // Directory to set TMPDIR to.
    private static final String TMP_DIRECTORY = "tmp";
    // Directory to set HOME to.
    private static final String HOME_DIRECTORY = "home";
    // Name of the child executable.
    private static final String MOJO_SHELL_CHILD_EXECUTABLE = "mojo_shell_child";
    // Path to the default origin of mojo: apps.
    private static final String DEFAULT_ORIGIN = "https://apps.domokit.org/android-arm";
    // Name of the default window manager.
    private static final String DEFAULT_WM = "mojo:kiosk_wm";

    /**
     * A guard flag for calling nativeInit() only once.
     **/
    private static boolean sInitialized = false;

    /**
     * Initializes the native system.
     **/
    static void ensureInitialized(Context applicationContext, String[] parameters) {
        if (sInitialized) return;
        try {
            FileHelper.extractFromAssets(applicationContext, NETWORK_LIBRARY_APP,
                    getLocalAppsDir(applicationContext), false);
            FileHelper.extractFromAssets(applicationContext, MOJO_SHELL_CHILD_EXECUTABLE,
                    getChildDir(applicationContext), false);
            File mojoShellChild =
                    new File(getChildDir(applicationContext), MOJO_SHELL_CHILD_EXECUTABLE);
            // The shell child executable needs to be ... executable.
            mojoShellChild.setExecutable(true, true);

            List<String> parametersList = new ArrayList<String>();
            // Program name.
            if (parameters != null) {
                parametersList.addAll(Arrays.asList(parameters));
            } else {
                // Apply default parameters.
                parametersList.add("--origin=" + DEFAULT_ORIGIN);
                parametersList.add("--url-mappings=mojo:window_manager=" + DEFAULT_WM);
            }

            nativeInit(applicationContext, mojoShellChild.getAbsolutePath(),
                    parametersList.toArray(new String[parametersList.size()]),
                    getLocalAppsDir(applicationContext).getAbsolutePath(),
                    getTmpDir(applicationContext).getAbsolutePath(),
                    getHomeDir(applicationContext).getAbsolutePath());
            sInitialized = true;
        } catch (Exception e) {
            Log.e(TAG, "ShellMain initialization failed.", e);
            throw new RuntimeException(e);
        }
    }

    /**
     * Starts the specified application in the specified context.
     *
     * @return <code>true</code> if an application has been launched.
     **/
    static boolean start() {
        return nativeStart();
    }

    /**
     * Adds the given URL to the set of mojo applications to run on start.
     */
    static void addApplicationURL(String url) {
        nativeAddApplicationURL(url);
    }

    /**
     * Starts this application in an already-initialized shell.
     */
    static void startApplicationURL(String url) {
        nativeStartApplicationURL(url);
    }

    private static File getLocalAppsDir(Context context) {
        return context.getDir(LOCAL_APP_DIRECTORY, Context.MODE_PRIVATE);
    }

    private static File getChildDir(Context context) {
        return context.getDir(CHILD_DIRECTORY, Context.MODE_PRIVATE);
    }

    private static File getTmpDir(Context context) {
        return new File(context.getCacheDir(), TMP_DIRECTORY);
    }

    private static File getHomeDir(Context context) {
        return context.getDir(HOME_DIRECTORY, Context.MODE_PRIVATE);
    }

    @CalledByNative
    private static void finishActivity(Activity activity) {
        activity.finish();
    }

    /**
     * Initializes the native system. This API should be called only once per process.
     **/
    private static native void nativeInit(Context context, String mojoShellChildPath,
            String[] parameters, String bundledAppsDirectory, String tmpDir, String homeDir);

    private static native boolean nativeStart();

    private static native void nativeAddApplicationURL(String url);

    private static native void nativeStartApplicationURL(String url);
}
