#include "image_process.h"

cv::Mat grayAndEdge(const cv::Mat& input) {
    cv::Mat gray, edges;
    cv::cvtColor(input, gray, cv::COLOR_BGR2GRAY);
    cv::Canny(gray, edges, 100, 200);
    return edges;
}
