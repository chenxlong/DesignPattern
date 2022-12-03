/**
 * Project Untitled
 */


#include "ConcreteResume.h"

/**
 * ConcreteResume implementation
 */

ConcreteResume::ConcreteResume(string name)
    :ResumePrototype(name)
{

}
/**
 * @return ResumePrototype *
 */
ResumePrototype * ConcreteResume::Clone() {
    ConcreteResume *pResume = new ConcreteResume(this->name);
    pResume->age = this->age;
    pResume->sex = this->sex;
    pResume->time = this->time;
    pResume->company = this->company;
    return pResume;
}
