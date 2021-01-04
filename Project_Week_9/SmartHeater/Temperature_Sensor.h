#include <iostream>
using namespace std;

#ifndef TEMPERATURESENSOR
#define TEMPERATURESENSOR

class SmartHomeSystem;
class TemperatureSensor
{
public:

	int temperature;
	void detect_outside_temperature();
	


};

#endif