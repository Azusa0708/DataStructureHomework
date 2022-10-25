#include "../head/AllLine.h"

bool AllLine::substitute(int subLineNum)
{
    std::string t;
    char t0;
    while ((t0 = getchar()) != '\n')
    {
        t.push_back(t0);
    }
    go(subLineNum);
    nowLine->eachLine = t;
    return true;
}