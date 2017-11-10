#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>

using namespace cv;
using namespace std;

int main( int argv, char** argc) {
	VideoCapture cap(1);
	Mat frame;
	cap >> frame;
	namedWindow("webCam", WINDOW_NORMAL | CV_GUI_NORMAL);
	while( waitKey(15) ){
		cap >> frame;
		if(frame.empty()){
			cout << "ERROR: Failed to capture frame from webcame!" << endl;
			exit(0);
		}
		imshow("webCam", frame);
	}
	
	return(0);
}
