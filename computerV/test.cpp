#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

void main() {

    string path = "C:\Users\schav\Downloads\computerV\computerV\computerV\Resources";
    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);

}