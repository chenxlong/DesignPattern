/**
 * Project Untitled
 */


#include "Product.h"
#include <iostream>

/**
 * Product implementation
 */


/**
 * @param part
 * @return void
 */
void Product::AddPart(string part) {
    parts.push_back(part);
    return;
}

/**
 * @return void
 */
void Product::Show() {
    cout << "product build:" << endl;
    for(auto it :parts)
    {
        cout << it << endl;
    }
    cout << "product end" << endl << endl;
    return;
}
