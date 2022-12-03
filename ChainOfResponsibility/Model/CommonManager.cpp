/**
 * Project Untitled
 */


#include "CommonManager.h"
#include <iostream>

/**
 * CommonManager implementation
 */


/**
 * @param Request request
 * @return void
 */
void CommonManager::RequestApplications(Request request)
{
    //请假申请两天内可有权同意
    if(request.requestType == "QingJia" && request.number <= 2)
    {
        cout << mName << " : " << request.requestContent << " number：" << request.number << " accept." << endl;
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
CommonManager::CommonManager(string name)
    :Manager(name)
{

}
