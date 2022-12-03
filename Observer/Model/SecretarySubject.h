/**
 * Project Untitled
 */


#ifndef _SECRETARYSUBJECT_H
#define _SECRETARYSUBJECT_H

#include "Subject.h"
#include <string>

using namespace std;

class SecretarySubject: public Subject
{
public: 
    string subjectState;
};

#endif //_SECRETARYSUBJECT_H
