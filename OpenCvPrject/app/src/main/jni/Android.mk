LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

#opencv
OPENCVROOT:= C:\opencv-4.1.0-android-sdk
OPENCV_CAMERA_MODULES:=on
OPENCV_INSTALL_MODULES:=on
OPENCV_LIB_TYPE:=SHARED
include ${OPENCVROOT}/sdk/native/jni/OpenCV.mk

LOCAL_SRC_FILES := com_example_opencvprject_OpenCvNativeClass.cpp

LOCAL_LDLIBS += -llog
LOCAL_MODULE := MyOpenCVLibs


include $(BUILD_SHARED_LIBRARY)