#include "../head/AllLine.h"
#include<string>

bool AllLine::substitute(int subLineNum)
{
    try
    {
        go(subLineNum);
        std::string subStr;
        int temp = getchar();
        std::getline(std::cin,subStr);
        setEachLine(subStr);
        return true;
    }
    catch(...)
    {
        return false;
    }
}