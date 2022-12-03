/**
 * Project Untitled
 */


#ifndef _BOSSSUBJECT_H
#define _BOSSSUBJECT_H

#include "Subject.h"
#include <string>

using namespace std;

class BossSubject: public Subject
{
public: 
    string subjectState;
};

#endif //_BOSSSUBJECT_H
