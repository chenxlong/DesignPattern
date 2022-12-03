#include <iostream>
#include "GameRole.h"
#include "RoleStateCaretaker.h"
using namespace std;

int main()
{
    //大战Boss前
    GameRole role;
    role.GetInitState();
    role.StateDisplay();

    //保存角色状态
    RoleStateCaretaker stateCaretaker;//备份管理
     //由于封装在Memento中，我们并不知道保存了哪些具体数据
    stateCaretaker.SetMemento(role.CreateStateMemento());

    //大战Boss
    role.Fight();
    role.StateDisplay();

    //恢复之前状态
    role.RecoverState(stateCaretaker.GetMemento(0));
    role.StateDisplay();

    return 0;
}
