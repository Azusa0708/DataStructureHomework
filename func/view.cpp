#include "../head/AllLine.h"

void AllLine::view()
{
	if (isEmpty())
	{
		return;
	}
	else
	{
		nowLine = firstLine;
		nowLineNum = 0;
		while (nowLine->nextLine != NULL)
		{
			std::cout << getEachLine() << "\n";
			nowLine = nowLine->nextLine;
			nowLineNum++;
		}
		std::cout << getEachLine() << "\n";
	}
}