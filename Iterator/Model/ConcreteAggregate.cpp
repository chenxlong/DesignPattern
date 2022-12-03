/**
 * Project Untitled
 */


#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

/**
 * ConcreteAggregate implementation
 */


/**
 * @return Iterator *
 */
Iterator * ConcreteAggregate::CreateIterator() {
    return new ConcreteIterator(this);
}

/**
 * @param name
 * @return void
 */
void ConcreteAggregate::Push(string name)
{
    mName.push_back(name);
}

/**
 * @param index
 * @return string
 */
string ConcreteAggregate::Pop(int index)
{
    return mName[index];
}

/**
 * @return int
 */
int ConcreteAggregate::Count() {
    return mName.size();
}
