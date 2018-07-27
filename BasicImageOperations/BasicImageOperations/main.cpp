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
    const string imageName = "/Users/hikalif/Downloads/day-1-basic-operations/sample.jpg";
    if(!imageOperations.LoadImage(imageName)) {
        return -1;
    }
    
    //Get sourceImage
    Mat sourceImage = imageOperations.GetSourceImage();
    
    //Show sourceImage
    //imageOperations.ShowImage("image", sourceImage);
    
    //Save image to file
    //imageOperations.SaveImage("/Users/hikalif/Downloads/image.jpg", sourceImage);
    
    return 0;
}
