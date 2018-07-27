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
