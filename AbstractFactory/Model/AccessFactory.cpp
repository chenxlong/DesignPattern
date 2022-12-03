/**
 * Project Untitled
 */


#include "AccessFactory.h"
#include "AccessUser.h"
#include "AccessDepartment.h"
/**
 * AccessFactory implementation
 */


/**
 * @return IUser *
 */
IUser * AccessFactory::CreateUser() {
    return new AccessUser();
}

/**
 * @return IDepartment *
 */
IDepartment * AccessFactory::CreateDepartment() {
    return new AccessDepartment();
}
