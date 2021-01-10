#include "LAMP.h"
#include "HEATER.h"
#include "SOUNDSYSTEM.h"
#include "LightSensor.h"
#include "MotionSensor.h"
#include <iostream>


#define NOMOTION_DETECTED 0
#define MOTION_DETECTED 1

using namespace std;
int state = 0;


int main()
{
	Lamp lamp1; //kena buat object
	SoundSystem music1;
	Heater heater1;
	Motion_Sensor mot1;
	LightSensor lightDet;

	if (mot1.motion_detected())
	{
		state = 1;
	}
	else 
	{
		state = 0;
	}

	switch (state)
	{
	

	case NOMOTION_DETECTED:
		cout << "Motion is not detected" << endl;
		lamp1.Off_light();
		music1.music_off();
		heater1.heater_off();
		

		for (int motion = 0; motion < 1; motion++)
		{
			int lightsensor;
			cin >> lightsensor;
			if (lightsensor == 1)
			{
				lightDet.light_detected();
				lamp1.Off_light();
			}
			else

			{
				lightDet.nolight_detected();
				lamp1.On_light();
			}
		}
		break;

	case MOTION_DETECTED:
		cout << "Motion is detected" << endl;
		lamp1.On_light(); // cara nak buat object and fx
		music1.music_on();
		heater1.heater_on();

		for (int motion = 1; motion < 2; motion++)
		{
			int lightsensor;
			cin >> lightsensor;
			if (lightsensor == 1)
			{
				lightDet.light_detected();
				lamp1.Off_light();
			}
			else

			{
				lightDet.nolight_detected();
				lamp1.On_light();
			}
			
		}
		break;
	}


}

