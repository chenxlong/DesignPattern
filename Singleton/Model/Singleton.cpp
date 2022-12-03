/**
 * Project Untitled
 */


#include "Singleton.h"
#include <iostream>

/**
 * Singleton implementation
 */

Singleton * Singleton::Instance = nullptr;
std::mutex Singleton::mtx;
/**
 * @return Singleton *
 */
Singleton * Singleton::GetInstance() {
    if(nullptr == Instance)
    {
        mtx.lock();
        //double-check locking 双重检查锁定使线程安全
        if(nullptr == Instance)
        {
            Instance = new Singleton();
        }
        mtx.unlock();
    }

    return Instance;
}

void Singleton::FreeInstance()
{
    if(Instance)
    {
        mtx.lock();
        if(Instance)
        {
            delete Instance;
            Instance = nullptr;
        }
        mtx.unlock();
    }
}

void Singleton::Test()
{
    std::cout << "instance addr:" << this << std::endl;
}

Singleton::Singleton()
{

}
