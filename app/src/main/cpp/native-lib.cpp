#include <jni.h>
#include <string>
#include<vector>
#include <opencv2/core/cvdef.h>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

extern "C" JNIEXPORT jstring

JNICALL
Java_com_parsifal_cv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = CV_VERSION;
    return env->NewStringUTF(hello.c_str());
}