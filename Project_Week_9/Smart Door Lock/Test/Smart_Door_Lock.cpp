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
    cout << "Enter Password" << endl;
    cin >> password;

    if (password == 2021)
    {
        //CORRECT_STATE:
        
        door1.door_unlock();
        door1.openDoor();
        music.playSound();
        display.lcd_display();
        


    }

    else 
    {
        door1.door_lock();
        door1.closeDoor();
        music.playSound();
        display.lcd_wrong();

    }

}
