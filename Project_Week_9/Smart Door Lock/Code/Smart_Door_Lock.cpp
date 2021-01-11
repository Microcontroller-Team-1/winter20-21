#include "Buzzer.h"
#include "LCD.h"
#include "User.h"
#include "Door.h"
#include <iostream>

using namespace std;


int main()
{
    lcd display;
    Buzzer music;
    Door door1;
    int password;
    cin >> password;

    if (password == 1)
    {
        //CORRECT_STATE:
        
        door1.door_unlock();
        door1.openDoor();
        music.playSound();
        display.lcd_display("Correct Password");
        


    }

    else 
    {
        door1.door_lock();
        door1.closeDoor();
        music.playSound();
        display.lcd_display("Incorrect Password");

    }

}
