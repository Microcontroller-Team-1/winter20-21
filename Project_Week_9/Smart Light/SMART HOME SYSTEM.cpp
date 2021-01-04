#include "LAMP.h"
#include "HEATER.h"
#include "SOUNDSYSTEM.h"
#include "LightSensor.h"
#include "MotionSensor.h"
#include <iostream>


#define MOTION_DETECTED 0
#define NOMOTION_DETECTED 1

using namespace std;
int state = 0;


int main()
{
	Lamp lamp1; //kena buat object
	SoundSystem music1;
	Heater heater1;


	switch (state)
	{
	case MOTION_DETECTED:
		lamp1.On_light(); // cara nak buat object and fx
		music1.music_on();
		heater1.heater_on();

		for (int motion = 1; motion < 2; motion++)
		{
			int lightsensor;
			cin >> lightsensor;
			if (lightsensor == 1)
			{
				lamp1.Off_light();
			}
			else 

			{
				lamp1.On_light();
			}
		}

	case NOMOTION_DETECTED:
		lamp1.Off_light();
		music1.music_off();
		heater1.heater_off();

		for (int motion = 0; motion < 1; motion++)
		{
			int lightsensor;
			cin >> lightsensor;
			if (lightsensor == 1)
			{
				lamp1.Off_light();
			}
			else

			{
				lamp1.On_light();
			}
		}
	}


}

