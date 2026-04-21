#include <opencv2/opencv.hpp>

int main() {
    cv::Mat img(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));
    cv::imshow("White Image", img);
    cv::waitKey(0);
    return 0;
}
