
#include <iostream>
#include "ConcreteResume.h"

using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    ResumePrototype *pPrototypeR1 = new ConcreteResume("XiaoMing");
    pPrototypeR1->SetPersonalInfo("man", "20");
    pPrototypeR1->SetWorkExperience("2020-2021", "company1");
    pPrototypeR1->Display();

    ResumePrototype *pResumePrototype2 = pPrototypeR1->Clone();
    pResumePrototype2->Display();

    pResumePrototype2->SetWorkExperience("2022-2023", "company2");
    pResumePrototype2->Display();


    delete pResumePrototype2;
    delete pPrototypeR1;

    return 0;
}
