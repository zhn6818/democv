#pragma once

#include <opencv2/opencv.hpp>

#ifdef BUILDING_IMGPROC_DLL
#define IMGPROC_API __declspec(dllexport)
#else
#define IMGPROC_API __declspec(dllimport)
#endif

IMGPROC_API cv::Mat grayAndEdge(const cv::Mat& input);
