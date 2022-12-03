/**
 * Project Untitled
 */


#ifndef _ACCESSDEPARTMENT_H
#define _ACCESSDEPARTMENT_H

#include "IDepartment.h"


class AccessDepartment: public IDepartment {

    void Insert(Department department);
    Department GetDepartment(int id);
};

#endif //_ACCESSDEPARTMENT_H
