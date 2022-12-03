#include <iostream>
#include "BossSubject.h"
#include "NBAObserver.h"
#include "StockObserver.h"

using namespace std;

int main()
{
    //主题
    BossSubject boss;
    //观察者
    NBAObserver nbaObserver("XiaoMing", &boss);
    StockObserver stockObser("XiaoLi", &boss);

    boss.Attach(&nbaObserver);
    boss.Attach(&stockObser);

    boss.subjectState = "boss come in!";
    boss.Notify();

    boss.Detach(&stockObser);
    boss.Detach(&nbaObserver);

    return 0;
}
