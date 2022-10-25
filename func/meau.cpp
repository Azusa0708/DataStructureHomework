#include "../head/AllLine.h"

void AllLine::meau()
{
    if (!isEmpty())
        std::cout << "NowLineNum:" << nowLineNum << " and the sentence: " << getEachLine() << std::endl;
    else
        std::cout << "File buffer is empty(please use command r to read file to buffer)." << std::endl;
}