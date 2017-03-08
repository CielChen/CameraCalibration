/*
------------------------------------------------
Author: CIEL
Date: 2017/02/14 情人节快乐！
Function: 相机标定
------------------------------------------------
*/

#include <core/affine.hpp>
#include <highgui/highgui.hpp>
#include <iostream>

#include "camera_calibrate.h"

using namespace cv;
using namespace std; 

int main()
{
	//相机标定
	camera_calibrate();  
	return 0;
} 