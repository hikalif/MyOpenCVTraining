//
//  main.cpp
//  BasicReadImage
//
//  Created by Guangfan Chen on 7/19/18.
//  Copyright © 2018 Guangfan Chen. All rights reserved.
//

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    
    Mat image;
    
    String imageName( "/Users/hikalif/Downloads/day-1-basic-operations/sample.jpg" );
    
    // LOAD image
    image = imread(imageName, IMREAD_COLOR);
    
    if(image.empty()) // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    
    namedWindow("image", WINDOW_AUTOSIZE);
    imshow("image", image);
    
    waitKey(0);
    
    return 0;
}
