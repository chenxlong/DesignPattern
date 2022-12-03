/**
 * Project Untitled
 */


#include "ObjectStruct.h"
#include "Person.h"
#include "ActionVisitor.h"

/**
 * ObjectStruct implementation
 */

ObjectStruct::~ObjectStruct()
{
    for(auto it : persons)
    {
        delete it;
    }
    persons.clear();
}
/**
 * @param p
 * @return void
 */
void ObjectStruct::Attach(Person* p) {
    persons.push_back(p);
}

/**
 * @param p
 * @return void
 */
void ObjectStruct::Detach(Person* p) {
    persons.remove(p);
    delete p;
}

/**
 * @param action
 * @return void
 */
void ObjectStruct::Display(ActionVisitor* action) {
    for (auto it : persons)
    {
        it->Accept(action);
    }
}
