/**
 * Project Untitled
 */


#ifndef _DODRINKABSTRACT_H
#define _DODRINKABSTRACT_H
#include <string>

using namespace std;

class DoDrinkAbstract {
public: 
    
    void Make();
    //煮水
    virtual void BoildWater() = 0;
    //冲泡
    virtual void Brew() = 0;
    //倒入杯中
    virtual void PourInCup() = 0;
    //添加辅料
    virtual void AddSomething() = 0;
    
    virtual ~DoDrinkAbstract();
    
/**
 * @param name
 */
    DoDrinkAbstract(string name);
protected:
    string mName;
};

#endif //_DODRINKABSTRACT_H
