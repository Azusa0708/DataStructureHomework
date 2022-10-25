#include "../head/AllLine.h"

bool AllLine::insert(int addLineNum, std::string insertStr)
{
    EachLine *t0 = indexValue(addLineNum - 1);
    EachLine *t1 = t0->nextLine;
    t0->nextLine = new EachLine;
    t0->nextLine->eachLine = insertStr;
    t0->nextLine->nextLine = t1;
    LineNum++;
    return true;
}