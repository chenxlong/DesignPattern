/**
 * Project Untitled
 */


#include "ConcreteCompany.h"
#include <iostream>

/**
 * ConcreteCompany implementation
 */


/**
 * @param name
 */
ConcreteCompany::ConcreteCompany(string name)
    :Company(name)
{
    children.clear();
}

ConcreteCompany::~ConcreteCompany()
{
    list<Company*>::iterator iter, temp;
    for(iter = children.begin(); iter != children.end();)
    {
        temp = iter;
        iter = children.erase(iter);
        delete *temp;
    }
}

/**
 * @param c
 * @return void
 */
void ConcreteCompany::Add(Company * c) {
    children.push_back(c);
}

/**
 * @param c
 * @return void
 */
void ConcreteCompany::Remove(Company * c) {
    list<Company*>::iterator iter;

    for(iter = children.begin(); iter != children.end(); iter++)
    {
        if(*iter == c)
        {
            delete *iter;
            children.erase(iter);
            break;
        }
    }
    return;
}

/**
 * @param depth
 * @return void
 */
void ConcreteCompany::Display(int depth)
{
    for(int i =0; i < depth; i++)
    {
        std::cout << "--";
    }
    std::cout << mName << endl;

    list<Company*>::iterator iter;
    for(iter = children.begin(); iter != children.end(); iter++)
    {
        (*iter)->Display(depth + 1);
    }
}

/**
 * @return void
 */
void ConcreteCompany::LineOfDuty() {
    list<Company*>::iterator iter;
    for(iter = children.begin(); iter != children.end(); iter++)
    {
        (*iter)->LineOfDuty();
    }
}

/**
 * @param index
 * @return Company *
 */
Company * ConcreteCompany::GetChild(int index) {
    int i = 0;
    list<Company*>::iterator iter;
    for(iter = children.begin(); iter != children.end();)
    {
        if(index == i)
        {
            return *iter;
        }
        i++;
        iter++;
    }
    return nullptr;
}
