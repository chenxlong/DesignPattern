
#include <iostream>
#include "Builder.h"
#include "Director.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"

using namespace std;
/**
 * @return int
 */
int main(int argc, char **argv)
 {
    Director director;

    Builder *pBuilder = new ConcreteBuilder1();
    director.Construct(pBuilder);
    Product product1 = pBuilder->GetProduct();
    product1.Show();

    delete pBuilder;

    pBuilder = new ConcreteBuilder2();
    director.Construct(pBuilder);
    Product product2 = pBuilder->GetProduct();
    product2.Show();

    delete pBuilder;

    return 0;
}
