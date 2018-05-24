#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main()
{
	Mat image = imread("/home/krutika/Documents/Summer_Projects/Computer_Vision_Course/book.jpg",IMREAD_COLOR);
	cout<< "Width"<<image.cols<<endl;
	cout<<"Height"<<image.rows<<endl;
	return 0;
}