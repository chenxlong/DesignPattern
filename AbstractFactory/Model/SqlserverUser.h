/**
 * Project Untitled
 */


#ifndef _SQLSERVERUSER_H
#define _SQLSERVERUSER_H

#include "IUser.h"


class SqlserverUser: public IUser {
    /**
     * @param user
     */
        void Insert(User user);

    /**
     * @param id
     */
        User GetUser(int id);
};

#endif //_SQLSERVERUSER_H
