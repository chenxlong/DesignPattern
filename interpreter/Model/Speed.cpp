/**
 * Project Untitled
 */


#include "Speed.h"
#include <iostream>

/**
 * Speed implementation
 */


/**
 * @param key
 * @param value
 * @return void
 */
void Speed::Excute(string key, double value)
{
    string speed;
    if(value < 500)
    {
        speed = "fast";
    }
    else if(value >= 1000)
    {
        speed = "slow";
    }
    else
    {
        speed = "middle";
    }
    cout << "Speed Excute: " << speed << endl;
}
