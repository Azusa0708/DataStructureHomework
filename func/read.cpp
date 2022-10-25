#include "../head/AllLine.h"
#include <fstream>

bool AllLine::read(std::string fileInPath)
{
    std::ifstream fin;
    fin.open(fileInPath.data());
    if (fin.fail())
        return 0;
    char t;
    std::string t0;
    if (isEmpty())
    {
        firstLine = nowLine = lastLine = new EachLine;
        std::getline(fin, t0);
        firstLine->eachLine = t0;
        nowLine++;
        LineNum++;
    }
    while (std::getline(fin, t0))
    {
        EachLine *newLine = new EachLine;
        newLine->eachLine = t0;
        newLine->nextLine = NULL;
        newLine->priorLine = lastLine;
        lastLine->nextLine = newLine;
        lastLine = newLine;
        nowLine = newLine;
        LineNum++;
        nowLineNum = LineNum;
    }
    fin.close();
    return 1;
}