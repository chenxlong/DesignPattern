/**
 * Project Untitled
 */


#ifndef _FINANCEDEPARTMENT_H
#define _FINANCEDEPARTMENT_H

#include "Company.h"


class FinanceDepartment final : public Company {
public: 
    
    void LineOfDuty();
    
/**
 * @param depth
 */
    void Display(int depth);
    
/**
 * @param name
 */
    FinanceDepartment(string name);

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

#endif //_FINANCEDEPARTMENT_H
