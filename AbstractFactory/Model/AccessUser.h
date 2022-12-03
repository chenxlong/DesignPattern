/**
 * Project Untitled
 */


#ifndef _ACCESSUSER_H
#define _ACCESSUSER_H

#include "IUser.h"


class AccessUser: public IUser {
    /**
     * @param user
     */
    void Insert(User user);

    /**
     * @param id
     */
    User GetUser(int id);
};

#endif //_ACCESSUSER_H
