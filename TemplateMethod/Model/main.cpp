#include <iostream>
#include "Coffee.h"
#include "Tea.h"

using namespace std;

int main()
{
    Coffee coffee("Nestle");
    coffee.Make();

    Tea tea("Green tea");
    tea.Make();

    return 0;
}
