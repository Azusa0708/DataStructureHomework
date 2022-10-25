#include "../head/AllLine.h"

void AllLine::view()
{
	if (isEmpty())
	{
		std::cout << "File buffer is empty(please use command r to read file to buffer)."
				  << "\n";
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