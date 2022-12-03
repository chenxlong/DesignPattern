#include <iostream>
#include "SuccessVisitor.h"
#include "FailVisitor.h"
#include "WaitVisitor.h"
#include "Man.h"
#include "Woman.h"
#include "ObjectStruct.h"

using namespace std;

int main()
{
    ObjectStruct *pObjs = new ObjectStruct();

    Man *pM = new Man;
    pM->mName = "Xiao Li";
    Woman *pW = new Woman;
    pW->mName = "Xiao Hong";

    pObjs->Attach(pM);
    pObjs->Attach(pW);

    //查看成功状态下，男人女人的反应
    SuccessVisitor *pV = new SuccessVisitor;
    pObjs->Display(pV);

    //失败状态下，男人女人的反应
    FailVisitor *pF = new FailVisitor;
    pObjs->Display(pF);

    delete pF;
    delete pV;
    delete pObjs;
    return 0;
}
