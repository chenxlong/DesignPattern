
#include <iostream>
#include "HandsetBrandN.h"
#include "HandsetBrandM.h"
#include "HandsetSoftImplementor.h"
#include "AddressListSoftImp.h"
#include "GameSoftImp.h"

using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
{
    HandsetBrandAbstracttion *pHandsetBrand = new HandsetBrandM();
    HandsetSoftImplementor *pImp1 = new GameSoftImp();
    HandsetSoftImplementor *pImp2 = new AddressListSoftImp();

    pHandsetBrand->SetHandsetSoftImplementor(pImp1);
    pHandsetBrand->Run();

    pHandsetBrand->SetHandsetSoftImplementor(pImp2);
    pHandsetBrand->Run();

    HandsetBrandAbstracttion *pHandsetBrandN = new HandsetBrandN();
    pHandsetBrandN->SetHandsetSoftImplementor(pImp2);
    pHandsetBrandN->Run();

    delete pHandsetBrandN;
    delete pImp2;
    delete pImp1;
    delete pHandsetBrand;

    return 0;
}
