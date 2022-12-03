/**
 * Project Untitled
 */


#include "ConcreteIterator.h"
#include "ConcreteAggregate.h"

/**
 * ConcreteIterator implementation
 */


/**
 * @return string
 */
void ConcreteIterator::Fisrt()
{
    current = 0;
}

/**
 * @return string
 */
void ConcreteIterator::Next()
{
    current++;
}

/**
 * @return bool
 */
bool ConcreteIterator::IsDone()
{
    return (current == mAggregate->Count());
}

/**
 * @return string
 */
string ConcreteIterator::CurrentItem()
{
    return mAggregate->Pop(current);
}

/**
 * @param aggregate
 */
ConcreteIterator::ConcreteIterator(ConcreteAggregate * aggregate)
{
    mAggregate = aggregate;
    current = 0;
}
