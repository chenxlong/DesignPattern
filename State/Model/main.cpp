#include <iostream>
#include "Work.h"

using namespace std;

int main()
{
    Work work;
    work.hour = 9;
    work.WriteProgram();

    work.hour = 10;
    work.WriteProgram();

    work.hour = 12;
    work.WriteProgram();

    work.hour = 14;
    work.WriteProgram();

    work.hour = 17;
    work.WriteProgram();

    work.finish = true;
    work.hour = 18;
    work.WriteProgram();

    return 0;
}
