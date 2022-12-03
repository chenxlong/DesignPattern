/**
 * Project Untitled
 */


#include "Person.h"
#include <iostream>
/**
 * Person implementation
 */


/**
 * @param name
 */
Person::Person(string name) {
    this->name = name;
}

/**
 * @return void
 */
void Person::Show() {
    cout << " decotatored " << name << endl;
}
Person::~Person()
{

}
