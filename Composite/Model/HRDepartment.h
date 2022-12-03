/**
 * Project Untitled
 */


#ifndef _HRDEPARTMENT_H
#define _HRDEPARTMENT_H

#include "Company.h"


class HRDepartment final : public Company {
public: 
    
    void LineOfDuty();
    
/**
 * @param depth
 */
    void Display(int depth);
    
/**
 * @param name
 */
    HRDepartment(string name);
    /**
     * @param c
     */
    void Add(Company * c);

    /**
     * @param c
     */
    void Remove(Company * c);

    /**
     * @param depth
     */
    Company * GetChild(int index);
};

#endif //_HRDEPARTMENT_H
