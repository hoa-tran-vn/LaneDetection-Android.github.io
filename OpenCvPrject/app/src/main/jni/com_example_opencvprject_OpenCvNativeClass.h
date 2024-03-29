/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "opencv2/opencv.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

/* Header for class com_example_opencvprject_OpenCvNativeClass */

using namespace cv;
#ifndef _Included_com_example_opencvprject_OpenCvNativeClass
#define _Included_com_example_opencvprject_OpenCvNativeClass
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_opencvprject_OpenCvNativeClass
 * Method:    faceDetection
 * Signature: (J)I
 */
void detect(Mat& frame);

JNIEXPORT void JNICALL Java_com_example_opencvprject_OpenCvNativeClass_lineDetection
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
