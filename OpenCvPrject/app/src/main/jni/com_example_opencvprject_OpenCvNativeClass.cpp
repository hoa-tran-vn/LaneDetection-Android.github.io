#include<com_example_opencvprject_OpenCvNativeClass.h>
#include <iostream>
using namespace cv;
using namespace std;


JNIEXPORT void JNICALL Java_com_example_opencvprject_OpenCvNativeClass_lineDetection
    (JNIEnv *, jclass, jlong addrRgba){
    Mat& src = *(Mat*)addrRgba;
    detect(src);
    }
void detect(Mat& src){
    Mat dst, cdst;

    // chuyển đổi thang màu sang ảnh xám
    cvtColor(src, dst, COLOR_RGB2GRAY);

   // equalizeHist( dst, dst );
   // threshold(dst, cdst, 240, 200, THRESH_TOZERO);

   //Lấy ngưỡng để loại bỏ các vùng không mong muốn
    threshold(dst, cdst, 250, 200, THRESH_BINARY_INV );

    // nhận diện đường biên
    Canny(cdst, dst, 190, 230, 7, true);

    // tạo trường vector để lưu các điểm
    vector<Vec4i> linesP;
    HoughLinesP(dst, linesP, 1, CV_PI/180, 43, 35, 60 );
    // vẽ làn đường
    for( size_t i = 0; i < linesP.size(); i++ )
    {
        Vec4i l = linesP[i];
        line( src, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0,250,30), 3, LINE_AA);
    }


}