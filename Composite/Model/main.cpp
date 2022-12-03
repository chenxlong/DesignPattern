
#include <iostream>
#include "ConcreteCompany.h"
#include "HRDepartment.h"
#include "FinanceDepartment.h"

using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    ConcreteCompany root = ConcreteCompany("BeiJing Company");
    root.Add(new HRDepartment("BeiJing HR Department"));
    root.Add(new FinanceDepartment("BeiJing Finance Department"));

    ConcreteCompany *pSubCompay = new ConcreteCompany("ShangHai SubCompany");
    pSubCompay->Add(new HRDepartment("ShangHai HR Department"));
    pSubCompay->Add(new FinanceDepartment("ShangHai Finance Department"));

    root.Add(pSubCompay);

    ConcreteCompany *pSubSubCompay = new ConcreteCompany("NanJing SubSubCompany");
    pSubSubCompay->Add(new HRDepartment("NanJing HR Department"));
    pSubSubCompay->Add(new FinanceDepartment("NanJing Finance Department"));

    pSubCompay->Add(pSubSubCompay);

    pSubSubCompay = new ConcreteCompany("HangZhou SubSubCompany");
    pSubSubCompay->Add(new HRDepartment("HangZhou HR Department"));
    pSubSubCompay->Add(new FinanceDepartment("HangZhou Finance Department"));

    pSubCompay->Add(pSubSubCompay);

    //结构图
    root.Display(1);
    //职责
    root.LineOfDuty();

    return 0;
}
