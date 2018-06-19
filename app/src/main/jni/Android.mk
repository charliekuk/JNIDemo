LOCAL_PATH := $(call my-dir)

# Builds a dylib out of test.cpp
include $(CLEAR_VARS)
LOCAL_MODULE := JNIHello
LOCAL_SRC_FILES := JNIHello.cpp
LOCAL_LDLIBS := -llog
include $(BUILD_SHARED_LIBRARY)