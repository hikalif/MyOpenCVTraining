//
//  main.cpp
//  ImageTransformations
//
//  Created by Guangfan Chen on 7/30/18.
//  Copyright © 2018 Guangfan Chen. All rights reserved.
//

#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <cmath>
#include <vector>

using namespace cv;
using namespace std;

//A test to get warpAffine matrix
void GetAffine() {
    // Input triangle
    vector <Point2f> tri1;
    tri1.push_back(Point2f(50, 50));
    tri1.push_back(Point2f(180, 140));
    tri1.push_back(Point2f(150, 200));
    
    // Output triangle
    vector <Point2f> tri2;
    tri2.push_back(Point2f(72, 51));
    tri2.push_back(Point2f(246, 129));
    tri2.push_back(Point2f(222, 216));
    
    // Another output triangle
    vector <Point2f> tri3;
    tri3.push_back(Point2f(77, 76));
    tri3.push_back(Point2f(260, 219));
    tri3.push_back(Point2f(242, 291));
    
    // Get the transformation matrices
    Mat warp = cv::getAffineTransform(tri1,tri2);
    Mat warp2 = cv::getAffineTransform(tri1,tri3);
    // Display the matrices
    cout << "Warp Matrix 1 : \n\n " << warp << "\n\n" << "Warp Matrix 2 : \n" << warp2<< endl;
}

//show images after warpaffine
void DisplayWarpAffine() {
    // Read image
    Mat source = imread("sample.jpg",1);
    source.at<Vec3b>(100,100)[0]=0;
    source.at<Vec3b>(100,100)[1]=255;
    source.at<Vec3b>(100,100)[2]=0;
    source.at<Vec3b>(100,98)[0]=0;
    source.at<Vec3b>(100,98)[1]=255;
    source.at<Vec3b>(100,98)[2]=0;
    source.at<Vec3b>(100,102)[0]=0;
    source.at<Vec3b>(100,102)[1]=255;
    source.at<Vec3b>(100,102)[2]=0;
    source.at<Vec3b>(102,100)[0]=0;
    source.at<Vec3b>(102,100)[1]=255;
    source.at<Vec3b>(102,100)[2]=0;
    source.at<Vec3b>(98,100)[0]=0;
    source.at<Vec3b>(98,100)[1]=255;
    source.at<Vec3b>(98,100)[2]=0;
    source.at<Vec3b>(98,98)[0]=0;
    source.at<Vec3b>(98,98)[1]=255;
    source.at<Vec3b>(98,98)[2]=0;
    source.at<Vec3b>(98,102)[0]=0;
    source.at<Vec3b>(98,102)[1]=255;
    source.at<Vec3b>(98,102)[2]=0;
    source.at<Vec3b>(102,102)[0]=0;
    source.at<Vec3b>(102,102)[1]=255;
    source.at<Vec3b>(102,102)[2]=0;
    source.at<Vec3b>(102,98)[0]=0;
    source.at<Vec3b>(102,98)[1]=255;
    source.at<Vec3b>(102,98)[2]=0;
    source.at<Vec3b>(280,360)[0]=0;
    source.at<Vec3b>(280,360)[1]=255;
    source.at<Vec3b>(280,360)[2]=0;
    source.at<Vec3b>(278,360)[0]=0;
    source.at<Vec3b>(278,360)[1]=255;
    source.at<Vec3b>(278,360)[2]=0;
    source.at<Vec3b>(282,360)[0]=0;
    source.at<Vec3b>(282,360)[1]=255;
    source.at<Vec3b>(282,360)[2]=0;
    source.at<Vec3b>(280,362)[0]=0;
    source.at<Vec3b>(280,362)[1]=255;
    source.at<Vec3b>(280,362)[2]=0;
    source.at<Vec3b>(280,358)[0]=0;
    source.at<Vec3b>(280,358)[1]=255;
    source.at<Vec3b>(280,358)[2]=0;
    source.at<Vec3b>(278,358)[0]=0;
    source.at<Vec3b>(278,358)[1]=255;
    source.at<Vec3b>(278,358)[2]=0;
    source.at<Vec3b>(282,358)[0]=0;
    source.at<Vec3b>(282,358)[1]=255;
    source.at<Vec3b>(282,358)[2]=0;
    source.at<Vec3b>(282,362)[0]=0;
    source.at<Vec3b>(282,362)[1]=255;
    source.at<Vec3b>(282,362)[2]=0;
    source.at<Vec3b>(278,362)[0]=0;
    source.at<Vec3b>(278,362)[1]=255;
    source.at<Vec3b>(278,362)[2]=0;
    source.at<Vec3b>(400,300)[0]=0;
    source.at<Vec3b>(400,300)[1]=255;
    source.at<Vec3b>(400,300)[2]=0;
    source.at<Vec3b>(402,300)[0]=0;
    source.at<Vec3b>(402,300)[1]=255;
    source.at<Vec3b>(402,300)[2]=0;
    source.at<Vec3b>(398,300)[0]=0;
    source.at<Vec3b>(398,300)[1]=255;
    source.at<Vec3b>(398,300)[2]=0;
    source.at<Vec3b>(402,298)[0]=0;
    source.at<Vec3b>(402,298)[1]=255;
    source.at<Vec3b>(402,298)[2]=0;
    source.at<Vec3b>(400,298)[0]=0;
    source.at<Vec3b>(400,298)[1]=255;
    source.at<Vec3b>(400,298)[2]=0;
    source.at<Vec3b>(398,298)[0]=0;
    source.at<Vec3b>(398,298)[1]=255;
    source.at<Vec3b>(398,298)[2]=0;
    source.at<Vec3b>(400,302)[0]=0;
    source.at<Vec3b>(400,302)[1]=255;
    source.at<Vec3b>(400,302)[2]=0;
    source.at<Vec3b>(402,302)[0]=0;
    source.at<Vec3b>(402,302)[1]=255;
    source.at<Vec3b>(402,302)[2]=0;
    source.at<Vec3b>(398,302)[0]=0;
    source.at<Vec3b>(398,302)[1]=255;
    source.at<Vec3b>(398,302)[2]=0;
    
    line(source, Point2f(102,102), Point2f(358,278), Scalar(255,0,0), 1, 8,0);
    line(source, Point2f(362,282), Point2f(298,398), Scalar(255,0,0), 1, 8,0);
    line(source, Point2f(102,102), Point2f(298,402), Scalar(255,0,0), 1, 8,0);
    imshow("points",source);
    
    // Create mask/ warp matrix
    Mat warpMat = (Mat_<double>(2,3) << 1.2, 0.2, 2, -0.3, 1.3, 1);
    
    // Another mask
    Mat warpMat2 = (Mat_<double>(2,3) << 1.2, 0.3, 2, 0.2, 1.3, 1);
    
    Mat result,result2;
    // Use warp affine
    cv::warpAffine(source, result, warpMat, Size(1.5*source.rows, 1.4*source.cols), INTER_LINEAR, BORDER_REFLECT_101);
    cv::warpAffine(source, result2, warpMat2, Size(1.5*source.rows, 1.4*source.cols), INTER_LINEAR, BORDER_REFLECT_101);
    // Display images
    imshow("Original", source);
    imshow("Result", result);
    imshow("Result2", result2);
    waitKey(0);
    destroyAllWindows();
}

//homography book
void HomographyBook() {
    // Read source image.
    Mat im_src = imread("book2.jpg");
    Mat im_dst = imread("book1.jpg");
    
    // Create a vector of source and destination points.
    vector<Point2f> pts_src, pts_dst;
    
    pts_src.push_back(Point2f(141, 131));
    pts_src.push_back(Point2f(480, 159));
    pts_src.push_back(Point2f(493, 630));
    pts_src.push_back(Point2f(64, 601));
    
    pts_dst.push_back(Point2f(318, 256));
    pts_dst.push_back(Point2f(534, 372));
    pts_dst.push_back(Point2f(316, 670));
    pts_dst.push_back(Point2f(73, 473));
    
    // Set data for mouse event
    Mat im_out;
    
    // Calculate the homography
    Mat h = findHomography(pts_src, pts_dst);
    
    // Warp source image to destination
    warpPerspective(im_src, im_out, h, im_out.size());
    
    // Show image
    imshow("Source Image", im_src);
    imshow("Destination Image", im_dst);
    imshow("Warped Source Image", im_out);
    waitKey(0);
}

struct userdata{
    Mat im;
    vector<Point2f> points;
};


void mouseHandler(int event, int x, int y, int flags, void* data_ptr)
{
    if  ( event == EVENT_LBUTTONDOWN )
    {
        userdata *data = ((userdata *) data_ptr);
        circle(data->im, Point(x,y),3,Scalar(0,0,255), 5, CV_AA);
        imshow("Image", data->im);
        if (data->points.size() < 4)
        {
            data->points.push_back(Point2f(x,y));
        }
    }
    
}

//perspective correction
void PerspectiveCorrection() {
    // Read source image.
    Mat im_src = imread("book1.jpg");
    
    // Destination image. The aspect ratio of the book is 3/4
    Size size(300,400);
    Mat im_dst = Mat::zeros(size,CV_8UC3);
    
    
    // Create a vector of destination points.
    vector<Point2f> pts_dst;
    
    pts_dst.push_back(Point2f(0,0));
    pts_dst.push_back(Point2f(size.width - 1, 0));
    pts_dst.push_back(Point2f(size.width - 1, size.height -1));
    pts_dst.push_back(Point2f(0, size.height - 1 ));
    
    // Set data for mouse event
    Mat im_temp = im_src.clone();
    userdata data;
    data.im = im_temp;
    
    cout << "Click on the four corners of the book -- top left first and" << endl
    << "bottom left last -- and then hit ENTER" << endl;
    
    // Show image and wait for 4 clicks.
    imshow("Image", im_temp);
    // Set the callback function for any mouse event
    setMouseCallback("Image", mouseHandler, &data);
    waitKey(0);
    
    // Calculate the homography
    Mat h = findHomography(data.points, pts_dst);
    
    // Warp source image to destination
    warpPerspective(im_src, im_dst, h, size);
    
    // Show image
    imshow("Image", im_dst);
    waitKey(0);
}

//virtual billboard
void VirtualBillboard() {
    //Read in the image
    Mat img_src = imread("first-image.jpg");
    Size size = img_src.size();
    
    //Create a vector of points
    vector<Point2f> pts_src;
    pts_src.push_back(Point2f(0, 0));
    pts_src.push_back(Point2f(size.width-1, 0));
    pts_src.push_back(Point2f(size.width-1, size.height-1));
    pts_src.push_back(Point2f(0, size.height-1));
    
    //destination image
    Mat img_dst = imread("times-square.jpg");
    
    //set data for mouse handler
    Mat img_temp = img_dst.clone();
    userdata data;
    data.im = img_temp;
    
    //show the image
    imshow("Image", img_temp);
    
    cout << "Click on four corners of a billboard and then press ENTER" << endl;
    //set the callback function for any mouse event
    setMouseCallback("Image", mouseHandler, &data);
    waitKey(0);
    
    //caculater homography between source and destination points
    Mat h = findHomography(pts_src, data.points);
    
    //warp source image
    warpPerspective(img_src, img_temp, h, img_temp.size());
    
    //show temp image
//    imshow("img_temp", img_temp);
//    waitKey(0);
    
    //Extract four points from mouse data
    Point pts_dst[4];
    for(int i = 0; i < 4; i++) {
        pts_dst[i] = data.points[i];
    }
    
    //black out polygonal area in destination image
    fillConvexPoly(img_dst, pts_dst, 4, Scalar(0), CV_AA);
    
    //add warped source image to destination image
    img_dst = img_dst + img_temp;
    
    //display image
    imshow("Image", img_dst);
    waitKey(0);
}

int main(int argc, const char * argv[]) {
    
    //GetAffine();
    
    //DisplayWarpAffine();

    //HomographyBook();
    
    //PerspectiveCorrection();
    
    VirtualBillboard();
    
    return 0;
}
