/**
 * Project Untitled
 */


#include "HRDepartment.h"
#include <iostream>

/**
 * HRDepartment implementation
 */


/**
 * @return void
 */
void HRDepartment::LineOfDuty()
{
    std::cout << mName << " Staff recruitment" << std::endl;
}

/**
 * @param depth
 * @return void
 */
void HRDepartment::Display(int depth) {
    for(int i = 0; i < depth; i++)
    {
        std::cout << "--";
    }
     std::cout << mName << std::endl;
}

void HRDepartment::Add(Company *c)
{

}

void HRDepartment::Remove(Company *c)
{

}

Company *HRDepartment::GetChild(int index)
{

}

/**
 * @param name
 */
HRDepartment::HRDepartment(string name)
    :Company(name)
{

}
