//
//  main.cpp
//  BasicImageOperations
//
//  Created by Guangfan Chen on 7/27/18.
//  Copyright © 2018 Guangfan Chen. All rights reserved.
//

#include <iostream>
#include "ImageOperations.hpp"

int main(int argc, const char * argv[]) {
    ImageOperations imageOperations;
    
    //Load image
    const string imageName = "./sample.jpg";
    if(!imageOperations.LoadImage(imageName)) {
        return -1;
    }
    
    //Get sourceImage
    Mat sourceImage = imageOperations.GetSourceImage();
    
    //Show sourceImage
    imageOperations.ShowImage("image", sourceImage);
    
    //Save image to file
//    imageOperations.SaveImage("/Users/hikalif/Downloads/image.jpg", sourceImage);
    
    //Get grayImage
//    Mat grayImage;
//    imageOperations.GetGrayImage(grayImage);
//    imageOperations.ShowImage("grayImage", grayImage);
    
    //Get rotatedImage
//    Mat rotatedImage;
//    Point2f center(sourceImage.cols/2, sourceImage.rows/2);
//    double rotationAngle = 30;
//    double scale = 1;
//    Size size(sourceImage.cols, sourceImage.rows);
//    imageOperations.GetRotatedImage(rotatedImage, center, rotationAngle, scale, size);
//    imageOperations.ShowImage("rotatedImage", rotatedImage);
    
    //Get resizedImage
//    Mat resizedImage;
//    double scaleX = 0.5;
//    double scaleY = 0.5;
//    imageOperations.GetResizedImage(resizedImage, scaleX, scaleY);
//    imageOperations.ShowImage("resizedImage", resizedImage);
    
    //Get cropedImage
//    Mat cropedImage;
//    Range y(0, 150);
//    Range x(0, 300);
//    imageOperations.GetCropedImage(cropedImage, y, x);
//    imageOperations.ShowImage("cropedImage", cropedImage);
    
    return 0;
}
