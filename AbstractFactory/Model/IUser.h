/**
 * Project Untitled
 */


#ifndef _IUSER_H
#define _IUSER_H

#include "User.h"

class IUser {
public: 
    virtual ~IUser();
/**
 * @param user
 */
    virtual void Insert(User user) = 0;
    
/**
 * @param id
 */
    virtual User GetUser(int id) = 0;
};

#endif //_IUSER_H

