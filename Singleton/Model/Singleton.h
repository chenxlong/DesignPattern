/**
 * Project Untitled
 */


#ifndef _SINGLETON_H
#define _SINGLETON_H

#include <mutex>

class Singleton {
public: 
    static Singleton * GetInstance();
    static void FreeInstance();
    void Test();

private: 
    static Singleton * Instance;
    static std::mutex mtx;
    Singleton();
};

#endif //_SINGLETON_H
