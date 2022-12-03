/**
 * Project Untitled
 */


#ifndef _MANAGER_H
#define _MANAGER_H

#include "Request.h"

class Manager {
public: 
    
/**
 * @param Request request
 */
    virtual void RequestApplications(Request request) = 0;
    
/**
 * @param superior
 */
    void SetNextHandler(Manager* superior);
    
/**
 * @param name
 */
    Manager(string name);
    
    virtual ~Manager();
protected: 
    Manager * superior;
    string mName;
};

#endif //_MANAGER_H
