#pragma once
#include<iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include<opencv2/opencv.hpp>>
void adjust(cv::Mat& image, int temperature);/*temperature����ҭn�զ�ŭȡA�Y�Ʀr�V�j�A�h�Ϥ��V����*/
void average(cv::Mat& image, int adjust);/*adjust>0�իG�Ϥ��A�p��s�շt�Ϥ�*/
