/**
 * Project Untitled
 */


#include "ForeignCenter.h"
#include <iostream>
#include "utils.h"

/**
 * ForeignCenter implementation
 */


ForeignCenter::ForeignCenter() {

}

/**
 * @return void
 */
void ForeignCenter::JingGong() {
    cout << Utils::UTF8ToGBK(name.c_str()) << Utils::UTF8ToGBK(": 进攻！") << endl;
}

/**
 * @return void
 */
void ForeignCenter::FangShou() {
    cout << Utils::UTF8ToGBK(name.c_str()) << Utils::UTF8ToGBK(": 防守！") << endl;
}

/**
 * @param name
 * @return void
 */
void ForeignCenter::SetName(string name) {
    this->name = name;
}
