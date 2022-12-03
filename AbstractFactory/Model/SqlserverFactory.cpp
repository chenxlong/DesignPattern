/**
 * Project Untitled
 */


#include "SqlserverFactory.h"
#include "SqlserverUser.h"
#include "SqlserverDepartment.h"

/**
 * SqlserverFactory implementation
 */


/**
 * @return IUser *
 */
IUser * SqlserverFactory::CreateUser() {
    return new SqlserverUser();
}

/**
 * @return IDepartment *
 */
IDepartment * SqlserverFactory::CreateDepartment() {
    return new SqlserverDepartment();
}
