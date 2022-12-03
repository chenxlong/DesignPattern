
#include <iostream>
#include "ForeignCenterAdapter.h"
#include "Center.h"
#include "Forwards.h"

using namespace std;

//文件编码UTF8
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    PlayerTarget *pPlayer = new Center("科比");
    pPlayer->Attack();

    delete  pPlayer;

    pPlayer = new ForeignCenterAdapter("姚明");
    pPlayer->Attack();

    delete pPlayer;

    return 0;
}
