#include <iostream>
#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"
#include "Iterator.h"

using namespace std;

int main()
{

    ConcreteAggregate aggregate;

    aggregate.Push("zhou");
    aggregate.Push("wu");
    aggregate.Push("zheng");
    aggregate.Push("wang");

    //Iterator *pIter = aggregate.CreateIterator();
    Iterator *pIter = new ConcreteIterator(&aggregate);

    pIter->Fisrt();
    while(!pIter->IsDone())
    {
        cout << pIter->CurrentItem() << endl;
        pIter->Next();
    }

    delete pIter;
    return 0;
}
