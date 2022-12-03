/**
 * Project Untitled
 */


#include "Scale.h"
#include <iostream>

/**
 * Scale implementation
 */


/**
 * @param key
 * @param value
 * @return void
 */
void Scale::Excute(string key, double value) {
    string scale;
    int ikey = value;

    switch (ikey) {
        case 1:
            scale = "low";
            break;
        case 2:
            scale = "middle";
            break;
        case 3:
            scale = "height";
            break;
        default:
            break;
    }

    cout << "Scale Excute: " << scale << endl;
}
