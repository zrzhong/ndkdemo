package com.zzr.ndkdemo;

public class MyNdk {

    static {
        System.loadLibrary("MyLibrary");
    }

    public native String getString();

    public native String getMyString();
}
