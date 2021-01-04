#include <iostream>
using namespace std;

#ifndef HEATER
#define HEATER

class SmartHomeSystem;
class heater

{
public:
	int temperature;
	void release_hot_air();
	void turn_on_heater();
	void turn_off_heater();
	
};
#endif