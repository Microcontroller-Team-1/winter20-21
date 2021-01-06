#include "Smoke_detector.h"
#include <iostream>

bool Smoke_detector::sense_smoke() {
	bool smoke=false;
	cin >> smoke;
	if (smoke)
	{
		return true;
	}
	return false;
}

