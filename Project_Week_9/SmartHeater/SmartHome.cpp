#include <iostream>
using namespace std;

#include "Air_Conditioner.h"
#include "heater.h"
#include "HomeOwner.h"
#include "SmartHomeSystem.h"
#include "Temperature_Sensor.h"

int main() {

	heater heater1;
	AirConditioner airconditioner1;
	

	int temperature ;
	cin >> temperature;

	if (temperature > 30)
	{
		airconditioner1.turn_on_air_conditioner();
		heater1.turn_off_heater();
		heater1.release_hot_air();

	}
	else if (temperature < 10)
	{
		heater1.turn_on_heater();
		airconditioner1.turn_off_air_conditioner();
		airconditioner1.release_cool_air();
	}

	else
	{

		heater1.turn_off_heater();
		airconditioner1.turn_off_air_conditioner();
	}


}

