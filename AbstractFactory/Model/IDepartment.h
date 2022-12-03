/**
 * Project Untitled
 */


#ifndef _IDEPARTMENT_H
#define _IDEPARTMENT_H

#include "Department.h"

class IDepartment {
public: 
    virtual ~IDepartment();
/**
 * @param department
 */
    virtual void Insert(Department department) = 0;
    
/**
 * @param id
 */
    virtual Department GetDepartment(int id) = 0;
};

#endif //_IDEPARTMENT_H
