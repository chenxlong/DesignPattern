/**
 * Project Untitled
 */


#ifndef _PRODUCT_H
#define _PRODUCT_H
#include <list>
#include <string>
using namespace std;

class Product {
public:     
/**
 * @param part
 */
    void AddPart(string part);
    
    void Show();
private:
     list<string> parts;
};

#endif //_PRODUCT_H
