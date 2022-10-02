// C++ program to demonstrating ellipse
// over a self-formed background image
#include <iostream>
#include <opencv2/core/core.hpp>

// Drawing shapes
#include <opencv2/imgproc.hpp>

#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

// Driver Code
int main(int argc, char** argv)
{
	// Creating a blank image with
	// white background
	Mat image(500, 500, CV_8UC3,
			Scalar(255, 255, 255));

	// Check if the image is created
	// successfully or not
	if (!image.data) {
		std::cout << "Could not open or "
				<< "find the image\n";

		return 0;
	}

	// Drawing the ellipse
	ellipse(image, Point(256, 256),
			Size(100, 50), 0, 0,
			360, Scalar(0, 255, 255),
			-1, LINE_AA);

	// Showing image inside a window
	imshow("Output", image);
	waitKey(0);

	return 0;
}
