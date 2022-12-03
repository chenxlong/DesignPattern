/**
 * Project Untitled
 */


#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"

/**
 * FlyweightFactory implementation
 */


/**
 * @param key
 * @return Flyweight *
 */
Flyweight * FlyweightFactory::GetFlyweight(string key)
{
    if(flyweightmap.find(key) != flyweightmap.end())
    {
        return flyweightmap[key];
    }
    else
    {
        ConcreteFlyweight *pFlyweight = new ConcreteFlyweight(key);
        flyweightmap[key] = pFlyweight;
        return pFlyweight;
    }
}

FlyweightFactory::FlyweightFactory()
{
    flyweightmap.clear();
}

FlyweightFactory::~FlyweightFactory()
{
     map<string,Flyweight*>::iterator iter, tmp;
    for(iter = flyweightmap.begin(); iter != flyweightmap.end();)
    {
        delete iter->second;
        iter = flyweightmap.erase(iter);
    }
}
