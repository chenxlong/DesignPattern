
#include <iostream>
#include"Singleton.h"

using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    Singleton *pObj1 = Singleton::GetInstance();
    pObj1->Test();

    Singleton *pObj2 = Singleton::GetInstance();
    pObj2->Test();

    Singleton::FreeInstance();
    return 0;
}
