/**
 * Project Untitled
 */


#include "ResumePrototype.h"
#include <iostream>

/**
 * ResumePrototype implementation
 */


/**
 * @return ResumePrototype *
 */
ResumePrototype * ResumePrototype::Clone() {
    return nullptr;
}

ResumePrototype::~ResumePrototype()
{

}

ResumePrototype::ResumePrototype(string name)
{
    this->name = name;
}

void ResumePrototype::SetPersonalInfo(string sex, string age)
{
    this->sex = sex;
    this->age = age;
}

void ResumePrototype::SetWorkExperience(string time, string company)
{
    this->time = time;
    this->company = company;
}

void ResumePrototype::Display()
{
    cout << "name:" << name << " sex:" << sex << " age:" << age << endl;
    cout << "time:" << time << " company:" << company << endl << endl;
}
