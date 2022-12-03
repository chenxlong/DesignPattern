/**
 * Project Untitled
 */


#include "FinanceDepartment.h"
#include <iostream>

/**
 * FinanceDepartment implementation
 */


/**
 * @return void
 */
void FinanceDepartment::LineOfDuty()
{
    std::cout << mName << " Financial revenue and expenditure management" << std::endl;
}

/**
 * @param depth
 * @return void
 */
void FinanceDepartment::Display(int depth)
{
    for(int i = 0; i < depth; i++)
    {
        std::cout << "--";
    }
     std::cout << mName << std::endl;
}

void FinanceDepartment::Add(Company *c)
{

}

void FinanceDepartment::Remove(Company *c)
{

}

Company *FinanceDepartment::GetChild(int index)
{

}

/**
 * @param name
 */
FinanceDepartment::FinanceDepartment(string name)
    :Company(name)
{

}
