
#include <iostream>
using namespace std;

#ifndef AIRCONDITIONER
#define AIRCONDITIONER


class SmartHomeSystem;
class AirConditioner
{
public :

	int temperature;
	void release_cool_air();
	void turn_on_air_conditioner();
	void turn_off_air_conditioner();
	

};

#endif


