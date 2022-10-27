#include "../head/AllLine.h"

bool AllLine::insert(int addLineNum, std::string insertStr)
{
    EachLine *t0 = indexValue(addLineNum);
    EachLine *t1 = t0->nextLine;
    t0->nextLine = new EachLine;
    t0->nextLine->eachLine = insertStr;
    t0->nextLine->nextLine = t1;
    t0->nextLine->priorLine = t0;
    t1->priorLine = t0->nextLine;
    LineNum++;
    go(addLineNum + 1);
    return true;
}