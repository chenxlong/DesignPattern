/**
 * Project Untitled
 */


#ifndef _COMMONMANAGER_H
#define _COMMONMANAGER_H

#include "Manager.h"


class CommonManager: public Manager {
public: 
    
/**
 * @param Request request
 */
    void RequestApplications(Request request);
    
/**
 * @param name
 */
    CommonManager(string name);
};

#endif //_COMMONMANAGER_H
