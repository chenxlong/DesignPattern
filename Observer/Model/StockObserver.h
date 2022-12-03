/**
 * Project Untitled
 */


#ifndef _STOCKOBSERVER_H
#define _STOCKOBSERVER_H

#include "Observer.h"
#include <string>

using namespace std;
class BossSubject;

class StockObserver: public Observer
{
public: 
    
    void Update();
    
/**
 * @param name
 * @param subject
 */
    StockObserver(string name, BossSubject* subject);
private:
    string mName;
    BossSubject* mSubject;
};

#endif //_STOCKOBSERVER_H
