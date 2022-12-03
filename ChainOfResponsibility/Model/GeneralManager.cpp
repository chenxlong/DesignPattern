/**
 * Project Untitled
 */


#include "GeneralManager.h"
#include <iostream>

/**
 * GeneralManager implementation
 */


/**
 * @param Request request
 * @return void
 */
void GeneralManager::RequestApplications(Request request) {
    //有权处理全部
    if(request.requestType == "QingJia")
    {
        cout << mName << " : " << request.requestContent << " number: " << request.number << " accept." << endl;
    }
    else if(request.requestType == "JiaXin" && request.number <= 500)
    {
        cout << mName << " : " << request.requestContent << " number: " << request.number << " accept." << endl;
    }
    else if(request.requestType == "JiaXin" && request.number > 500)
    {
        cout << mName << " : " << request.requestContent << " number: " << request.number << " reject." << endl;
    }
    return;
}

/**
 * @param name
 */
GeneralManager::GeneralManager(string name)
    :Manager(name)
{

}
