/**
 * Project Untitled
 */


#ifndef _FOREIGNCENTER_H
#define _FOREIGNCENTER_H
#include <string>
using namespace std;

class ForeignCenter {
public: 
    
    ForeignCenter();
    
    void JingGong();
    
    void FangShou();
    
    void SetName(string name);
private: 
    string name;
};

#endif //_FOREIGNCENTER_H
