/**
 * Project Untitled
 */


#ifndef _GAMEROLE_H
#define _GAMEROLE_H
#include "RoleStateMemento.h"

class GameRole {
public: 
    //显示状态
    void StateDisplay();
    //创建状态备份
    RoleStateMemento CreateStateMemento();
    
/**
 * @param memento
 */
    //恢复状态
    void RecoverState(RoleStateMemento memento);

    //初始状态
    void GetInitState();
    //战斗
    void Fight();
private: 
    int vit; //生命力
    int atk; //攻击力
    int def; //防御力
};

#endif //_GAMEROLE_H
