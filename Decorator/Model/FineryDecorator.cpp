/**
 * Project Untitled
 */


#include "FineryDecorator.h"

/**
 * FineryDecorator implementation
 */


/**
 * @return void
 */

FineryDecorator::FineryDecorator()
    :Person(""),
     component(nullptr)
{

}

void FineryDecorator::Show()
{
    if(component != nullptr)
    {
       component->Show();
    }
}

/**
 * @param component
 */
void FineryDecorator::Decorator(Person * component)
{
    this->component = component;
}
