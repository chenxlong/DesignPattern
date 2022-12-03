/**
 * Project Untitled
 */


#ifndef _RESUMEPROTOTYPE_H
#define _RESUMEPROTOTYPE_H
#include <string>
using namespace std;

class ResumePrototype {
public: 
    virtual ~ResumePrototype() = 0;
    virtual ResumePrototype * Clone() = 0;
    ResumePrototype(string name);
    void SetPersonalInfo(string sex, string age);
    void SetWorkExperience(string time, string company);
    void Display();
protected:
    string name;
    string age;
    string sex;
    string time;
    string company;
};

#endif //_RESUMEPROTOTYPE_H
