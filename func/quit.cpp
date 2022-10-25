#include "../head/AllLine.h"
#include<fstream>
using namespace std;

bool AllLine::quit(std::string fileOutPath)
{
    ofstream ofs(fileOutPath);
    if(ofs.fail()) return 0;
    EachLine* t=firstLine;
    while(t!=NULL)
    {
        ofs<<t->eachLine<<'\n';
        t=t->nextLine;
    }
    return 1;
}