
#include <iostream>
#include "AccessFactory.h"
#include "SqlserverFactory.h"
#include "User.h"
#include "Department.h"
#include "IUser.h"
#include "IDepartment.h"

using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    User user1;
    user1.Id = 1;
    user1.Name = "";

    Department depart1;
    depart1.Id = 1;
    depart1.Name = "";

    AbstractFactory *pAbstractFactory = new AccessFactory; //实例化一个数据库对象给抽象工厂
    //AbstractFactory *pAbstractFactory = new SqlserverFactory;
    IUser *pUser = pAbstractFactory->CreateUser();
    pUser->Insert(user1);
    User user2 = pUser->GetUser(1);

    IDepartment *pDepartment = pAbstractFactory->CreateDepartment();
    pDepartment->Insert(depart1);
    Department depart2 = pDepartment->GetDepartment(1);

    delete pDepartment;
    delete pUser;
    delete pAbstractFactory;

    return 0;
}
