/**
 * Project Untitled
 */


#ifndef _NBAOBSERVER_H
#define _NBAOBSERVER_H

#include "Observer.h"
#include <string>

using namespace std;
class BossSubject;
class NBAObserver: public Observer
{
public: 
    
    void Update();
    
/**
 * @param name
 * @param subject
 */
    NBAObserver(string name, BossSubject* subject);
private:
    string mName;
    BossSubject* mSubject;
};

#endif //_NBAOBSERVER_H
