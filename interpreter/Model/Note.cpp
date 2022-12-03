/**
 * Project Untitled
 */


#include "Note.h"
#include <iostream>

/**
 * Note implementation
 */


/**
 * @param key
 * @param value
 * @return void
 */
void Note::Excute(string key, double value) {
    string strNote = "";

    if("C" == key)
    {
        strNote = "1";
    }
    else if("D" == key)
    {
        strNote = "2";
    }
    else if("E" == key)
    {
        strNote = "3";
    }
    else if("F" == key)
    {
        strNote = "4";
    }
    else if("G" == key)
    {
        strNote = "5";
    }
    else if("A" == key)
    {
        strNote = "6";
    }
    else if("B" == key)
    {
        strNote = "7";
    }

    cout << "Note Excute: " << strNote << endl;
}
