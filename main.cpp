#include <opencv2/opencv.hpp>
#include "image_process.h"

int main() {
    cv::Mat img(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));
    cv::Mat edges = grayAndEdge(img);
    cv::imshow("Original", img);
    cv::imshow("Edges", edges);
    cv::waitKey(0);
    return 0;
}
