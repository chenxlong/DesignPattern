/**
 * Project Untitled
 */


#ifndef _MAJORDOMO_H
#define _MAJORDOMO_H

#include "Manager.h"


class Majordomo: public Manager {
public: 
    
/**
 * @param Request request
 */
    void RequestApplications(Request request);
    
/**
 * @param name
 */
    Majordomo(string name);
};

#endif //_MAJORDOMO_H
