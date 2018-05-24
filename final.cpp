#include "opencv2/opencv.hpp" 
 
using namespace cv;
using namespace std;
 
int main( int argc, char** argv)
{
    // Read source image.
    Mat im_src = imread("/home/krutika/Documents/Summer_Projects/Computer_Vision_Course/book.jpg",IMREAD_COLOR);
    // Four corners of the book in source image
    vector<Point2f> pts_src;
    pts_src.push_back(Point2f(0, 0));
    pts_src.push_back(Point2f(254,0));
    pts_src.push_back(Point2f(0, 194));
    pts_src.push_back(Point2f(254, 194));
 
 
    // Read destination image.
    Mat im_dst = imread("/home/krutika/Documents/Summer_Projects/Computer_Vision_Course/ts.jpg",IMREAD_COLOR);
    // Four corners of the book in destination image.
    vector<Point2f> pts_dst;
    pts_dst.push_back(Point2f(69, 126));
    pts_dst.push_back(Point2f(170, 216));
    pts_dst.push_back(Point2f(14,201));
    pts_dst.push_back(Point2f(150, 268));
 
    // Calculate Homography
    Mat h = findHomography(pts_src, pts_dst);
 
    // Output image
    Mat im_out;
    // Warp source image to destination based on homography
    warpPerspective(im_src, im_out, h, im_dst.size());
 
    // Display images
    imshow("Source Image", im_src);
    imshow("Destination Image", im_dst);
    imshow("Warped Source Image", im_out);
 
    waitKey(0);
}