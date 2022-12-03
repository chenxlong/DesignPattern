/**
 * Project Untitled
 */


#ifndef _GENERALMANAGER_H
#define _GENERALMANAGER_H

#include "Manager.h"


class GeneralManager: public Manager {
public: 
    
/**
 * @param Request request
 */
    void RequestApplications(Request request);
    
/**
 * @param name
 */
    GeneralManager(string name);
};

#endif //_GENERALMANAGER_H
