/**
 * Project Untitled
 */


#include "ConcreteBuilder1.h"

/**
 * ConcreteBuilder1 implementation
 */


/**
 * @return void
 */
void ConcreteBuilder1::BuildPartA() {
    product.AddPart("partA");
    return;
}

/**
 * @return void
 */
void ConcreteBuilder1::BuildPartB() {
    product.AddPart("partB");
    return;
}

/**
 * @return Product
 */
Product ConcreteBuilder1::GetProduct() {
    return product;
}
