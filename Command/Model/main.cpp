#include <iostream>
#include "Waiter.h"
#include "Barbecuer.h"
#include "BakeChickenWingCommand.h"
#include "BakeMuttonCommand.h"

using namespace std;

int main()
{
    Barbecuer barbecur;
    Waiter waiter;
    //点菜命令
    BakeMuttonCommand bakeMuttonCmd(&barbecur);
    BakeChickenWingCommand bakeChickenWingCmd(&barbecur);

    //点菜订单
    waiter.SetOrder(&bakeMuttonCmd);
    waiter.SetOrder(&bakeChickenWingCmd);
    //取消订单
    waiter.CancelOrder(&bakeChickenWingCmd);

    waiter.SetOrder(&bakeMuttonCmd);

    //通知烧烤师傅执行操作
    waiter.NotifyExcute();

    return 0;
}
