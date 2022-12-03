/**
 * Project Untitled
 */


#include "GameRole.h"
#include <iostream>
using namespace std;
/**
 * GameRole implementation
 */


/**
 * @return void
 */
void GameRole::StateDisplay()
{
    cout << "state display:\n"
         << " vit:" << vit
         << " atk:" << atk
         << " def:" << def << endl;
}

/**
 * @return RoleStateMemento
 */
RoleStateMemento GameRole::CreateStateMemento()
{
    RoleStateMemento memento;
    memento.vit = vit;
    memento.atk = atk;
    memento.def = def;
    return memento;
}

/**
 * @param memento
 * @return void
 */
void GameRole::RecoverState(RoleStateMemento memento)
{
    vit = memento.vit;
    atk = memento.atk;
    def = memento.def;
}

void GameRole::GetInitState()
{
    vit = 100;
    atk = 100;
    def = 100;
}

void GameRole::Fight()
{
    vit = 0;
    atk = 0;
    def = 0;
}
