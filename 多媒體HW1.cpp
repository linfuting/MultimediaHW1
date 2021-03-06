﻿// 多媒體HW1.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <opencv\cv.h>
#include <opencv\cxcore.h>
#include <opencv\highgui.h>
int main(int argc, char* argv[])
{
	IplImage *img,*grayimg;
	img = cvLoadImage("color.jpg");
	cvShowImage("color", img);
	grayimg = cvCreateImage(cvGetSize(img), IPL_DEPTH_8U, 1);
	cvCvtColor(img, grayimg, CV_RGB2GRAY);
	cvShowImage("gray", grayimg);
	cvSaveImage("gray.jpg", grayimg);
	cvWaitKey();
	cvDestroyWindow("color");
	cvDestroyWindow("gray");
	cvReleaseImage(&img);
	return 0;
}
