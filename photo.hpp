#pragma once
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class Photo
{
    private:
        Mat image;
        Mat hsv;
        Mat value;
        string path;

        void calcHsv();
        void calcValue();
        void calc();
    public:
        Photo(Mat);
        Photo(string);

        Mat get_image();
        void set_image(Mat);
        Mat get_hsv();
        Mat get_value();
        void set_path(string);
        
        void show(string);
        void changeValue(Mat*, Mat);
        Mat apply_new_value(Mat);
        int mediumValue();
        void histSplit(Mat*, Mat*);
        Mat histMerge(Mat, Mat);
        void valueSplit(Mat*, Mat*);
        Mat valueMerge(Mat, Mat);
        Mat getMask(int k = 3);
        int countNoise(int k = 3);  
        int getAverage(int x, int y, int k, Mat img);  
        Mat temp(int k, int p);  
        int pix_difference(Mat other);  

        void showHist();
        void showHE();
        void showCLAHE();
        void showBHE();
        void showGC(float gamma = 0.8);
        void showNR(int count = 5, int k = 3, string title = "NR image");
        void showMBOBHE();
        void showMSRCR();
        
        Mat getHist();
        Mat getHE();
        Mat getCLAHE();
        Mat getBHE();
        Mat getGC(float gamma = 0.8);
        Mat getNR(int count = 5, int k = 3);
        Mat getMBOBHE();
        Mat getMSRCR();
};
