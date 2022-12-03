/**
 * Project Untitled
 */


#ifndef _FLYWEIGHTFACTORY_H
#define _FLYWEIGHTFACTORY_H
#include <string>
#include <map>
using namespace std;

class Flyweight;
class FlyweightFactory {
public: 
    
/**
 * @param key
 */
    Flyweight * GetFlyweight(string key);
    
    FlyweightFactory();
    
    ~FlyweightFactory();
private: 
    map<string,Flyweight*> flyweightmap;
};

#endif //_FLYWEIGHTFACTORY_H
