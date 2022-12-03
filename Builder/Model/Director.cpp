/**
 * Project Untitled
 */


#include "Director.h"
#include "Builder.h"

/**
 * Director implementation
 */


/**
 * @param builder
 * @return void
 */
void Director::Construct(Builder * builder) {
    builder->BuildPartA();
    builder->BuildPartB();
    return;
}
