#include "MotionSensor.h"
#include <iostream>

bool Motion_Sensor::motion_detected()
{
	bool motion = false;
	cin >> motion;
	if (motion)
	{
		return true;
	}
	return false;

}

