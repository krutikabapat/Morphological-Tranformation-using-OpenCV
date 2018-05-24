#include<cv.h>
#include<highgui.h>


   void mouseEvent(int event, int x, int y, int flags, void* param)
   {                    
    IplImage* img = (IplImage*) param;
    if (event == CV_EVENT_LBUTTONDOWN)
 { 
        printf("%d,%d\n", 
        x, y);
 }
}

int main()
{
     // Read image from file 
    IplImage *img=cvLoadImage("/home/krutika/Documents/Summer_Projects/Computer_Vision_Course/wraped_image.png",1);

      //Create a window
     cvNamedWindow("My Window", 1);

      //set the callback function for any mouse event
     cvSetMouseCallback("My Window",mouseEvent,&img);

      //show the image
     cvShowImage("My Window", img);

      // Wait until user press some key
     cvWaitKey(0);

      return 0;

}