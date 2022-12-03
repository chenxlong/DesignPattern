/**
 * Project Untitled
 */


#ifndef _SQLSERVERDEPARTMENT_H
#define _SQLSERVERDEPARTMENT_H

#include "IDepartment.h"


class SqlserverDepartment: public IDepartment {
    /**
     * @param department
     */
        void Insert(Department department);

    /**
     * @param id
     */
        Department GetDepartment(int id);
};

#endif //_SQLSERVERDEPARTMENT_H
