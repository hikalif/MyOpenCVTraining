//
//  ImageOperations.cpp
//  BasicImageOperations
//
//  Created by Guangfan Chen on 7/27/18.
//  Copyright © 2018 Guangfan Chen. All rights reserved.
//

#include "ImageOperations.hpp"

using namespace std;
using namespace cv;

Mat ImageOperations::GetSourceImage() {
    return sourceImage;
}

int ImageOperations::LoadImage(const std::string imageName) {
    sourceImage = imread(imageName, IMREAD_COLOR);
    
    //check for invalid input
    if(sourceImage.empty()) {
        cout << "Could not find or open the image." << endl;
        return 0;
    }
    
    return 1;
}

void ImageOperations::ShowImage(const std::string windowNmae, cv::Mat image) {
    //create a window to show image
    namedWindow(windowNmae, WINDOW_AUTOSIZE);
    
    //show image in the namedWindow
    imshow(windowNmae, image);
    
    //press any key to exit the window
    waitKey(0);
}

void ImageOperations::SaveImage(const std::string savedImageName, cv::Mat image) {
    imwrite(savedImageName, image);
}

void ImageOperations::GetGrayImage(Mat &grayImage) {
    cvtColor(sourceImage, grayImage, COLOR_RGB2GRAY);
}

void ImageOperations::GetRotatedImage(cv::Mat &rotatedImage, cv::Point2f center, double rotationAngle, double scale, Size size) {
    Mat M = getRotationMatrix2D(center, rotationAngle, scale);
    warpAffine(sourceImage, rotatedImage, M, size);
}

void ImageOperations::GetResizedImage(cv::Mat &resizedImage, double scaleX, double scaleY) {
    resize(sourceImage, resizedImage, Size(), scaleX, scaleY, INTER_LINEAR);
}

void ImageOperations::GetCropedImage(cv::Mat &cropedImage, cv::Range y, cv::Range x) {
    cropedImage = sourceImage(y, x);
}
