/**
 * Project Untitled
 */


#include "ConcreteBuilder2.h"

/**
 * ConcreteBuilder2 implementation
 */


/**
 * @return void
 */
void ConcreteBuilder2::BuildPartA() {
    product.AddPart("partX");
    return;
}

/**
 * @return void
 */
void ConcreteBuilder2::BuildPartB() {
    product.AddPart("partY");
    return;
}

/**
 * @return Product
 */
Product ConcreteBuilder2::GetProduct() {
    return product;
}
