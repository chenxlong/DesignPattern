/**
 * Project Untitled
 */


#include "Majordomo.h"
#include <iostream>

/**
 * Majordomo implementation
 */


/**
 * @param Request request
 * @return void
 */
void Majordomo::RequestApplications(Request request) {
    //请假申请五天内可有权同意
    if(request.requestType == "QingJia" && request.number <= 5)
    {
        cout << mName << " : " << request.requestContent << " number: " << request.number << " accept." << endl;
    }
    else
    {   //权限不够转到上级处理
        if(superior != nullptr)
        {
            superior->RequestApplications(request);
        }
    }
    return;
}

/**
 * @param name
 */
Majordomo::Majordomo(string name)
    :Manager(name)
{

}
