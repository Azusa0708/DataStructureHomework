#include "../head/AllLine.h"

EachLine* AllLine::indexValue(int findIndex)
{
    go(findIndex);
    return nowLine;
}