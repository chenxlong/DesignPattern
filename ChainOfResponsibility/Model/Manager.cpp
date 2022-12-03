/**
 * Project Untitled
 */


#include "Manager.h"

/**
 * Manager implementation
 */


/**
 * @param Request request
 * @return void
 */
void Manager::RequestApplications(Request request)
{
    return;
}

/**
 * @param superior
 */
void Manager::SetNextHandler(Manager* superior)
{
    this->superior = superior;
}

/**
 * @param name
 */
Manager::Manager(string name)
{
    this->mName = name;
}

Manager::~Manager()
{

}
