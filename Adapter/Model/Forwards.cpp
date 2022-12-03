/**
 * Project Untitled
 */


#include "Forwards.h"
#include <iostream>
#include "utils.h"

using namespace std;
/**
 * Forwards implementation
 */


/**
 * @return void
 */
void Forwards::Attack() {
    cout << Utils::UTF8ToGBK(name.c_str()) << ": attack!" << endl;
}

/**
 * @return void
 */
void Forwards::Defense() {
    cout << Utils::UTF8ToGBK(name.c_str()) << ": Defense!" << endl;
}

/**
 * @param name
 */
Forwards::Forwards(string name)
    :PlayerTarget(name)
{

}
