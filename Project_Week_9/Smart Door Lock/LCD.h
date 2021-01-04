#include <iostream>

using namespace std;

#ifndef LCD
#define LCD

class Smart_Door_Lock;
class lcd
{
public:

    void lcd_display("Enter Password");
    void lcd_display("Correct Password");
    void lcd_display("Incorrect Password");


};

#endif
