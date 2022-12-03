/**
 * Project Untitled
 */


#include "Center.h"
#include <iostream>
#include "utils.h"

using namespace std;
/**
 * Center implementation
 */


/**
 * @return void
 */
void Center::Attack() {
    cout << Utils::UTF8ToGBK(name.c_str()) << ": attack!" << endl;
}

/**
 * @return void
 */
void Center::Defense() {
    cout << Utils::UTF8ToGBK(name.c_str()) << ": Defense!" << endl;
}

/**
 * @param name
 */
Center::Center(string name)
    :PlayerTarget(name)
{

}
