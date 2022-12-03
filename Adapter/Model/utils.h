#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>

class Utils
{
public:
    Utils();
    static std::string UTF8ToGBK(const char* strUTF8);
    static std::string GBKToUTF8(const char* strGBK);
};

#endif // UTILS_H
