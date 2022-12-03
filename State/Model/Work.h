/**
 * Project Untitled
 */


#ifndef _WORK_H
#define _WORK_H
#include <string>
#include <map>

using namespace std;

class State;
class Work {
public: 
    Work();
    ~Work();
/**
 * @param name
 */
    void SetState(string name);
    
/**
 * @param string
 */
    State* GetState(string name);
    
    void WriteProgram();

    double hour; //钟点属性，状态转换的依据
    bool finish; //任务完成属性，是否下班的的依据
private: 
    State* currState; //当前状态
    map<string,State*> states;
};

#endif //_WORK_H
