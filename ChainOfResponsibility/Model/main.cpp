#include <iostream>
#include "CommonManager.h"
#include "Majordomo.h"
#include "GeneralManager.h"

using namespace std;

int main()
{
    Request request;
    request.requestType = "QingJia";
    request.number = 5;
    request.requestContent = "Qing jia";

    CommonManager jingLi("JingLi");
    Majordomo zongJian("ZongJian");
    GeneralManager zongJingLi("ZongJingLi");

    jingLi.SetNextHandler(&zongJian);
    zongJian.SetNextHandler(&zongJingLi);

    jingLi.RequestApplications(request);


    request.requestType = "JiaXin";
    request.number = 500;
    request.requestContent = "Jia Xin";

    jingLi.RequestApplications(request);

    request.number = 1000;
    jingLi.RequestApplications(request);

    return 0;
}
