#include "Window.h"
#include "Screen.h"
#include "Door.h"
#include "Sound_system.h"
#include "Light.h"
#include "Heater.h"
#include "Smoke_detector.h"
#include "Water.h"
#include <iostream>


#define INITIAL_STATE 0
#define BURNING_STATE 1



using namespace std;
int state;



/*int main()
{
    Light green_light;
    Light red_light;
    Water water1;
    Screen Display1;
    Screen Display2;
    Door door1;
    SoundSystem music;
    Window window1;
    Heater heater1;
    Heater Temp;
    Smoke_detector DetSmoke;

    if (DetSmoke.sense_smoke())
    {
        state = 1;
    }

    switch (state)
    {
    case BURNING_STATE:


        //BURNING_STATE:
        green_light.turn_off_green_light();
        red_light.turn_on_red_light();
        door1.door_unlock();
        door1.open_door();
        window1.open_window();
        music.play_sound();
        Display1.LCD_Display_Evacuate();
        water1.turn_on_water_sprinkler();
        heater1.turn_off_heater();
        break;
    case INITIAL_STATE:

        Temp.gettemperature();
        DetSmoke.sense_smoke();
        Display2.LCD_Display_All_Clear();
        music.notone();
        green_light.turn_on_green_light();
        red_light.turn_off_red_light();
        heater1.turn_on_heater();
        break;
    }

}
*/





