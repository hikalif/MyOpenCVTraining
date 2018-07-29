//
//  ImageOperations.hpp
//  BasicImageOperations
//
//  Created by Guangfan Chen on 7/27/18.
//  Copyright © 2018 Guangfan Chen. All rights reserved.
//

#ifndef ImageOperations_hpp
#define ImageOperations_hpp

#include <stdio.h>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

class ImageOperations{
private:
    Mat sourceImage;
public:
    Mat GetSourceImage();
    int LoadImage(const string imageName);
    void ShowImage(const string windowNmae, Mat image);
    void SaveImage(const string savedImageName, Mat image);
    
    void GetGrayImage(Mat &grayImage);
    void GetRotatedImage(Mat &rotatedImage, Point2f center, double rotationAngle, double scale, Size size);
    void GetResizedImage(Mat &resizedImage, double scaleX, double scaleY);
    void GetCropedImage(Mat &cropedImage, Range y, Range x);
};

#endif /* ImageOperations_hpp */
