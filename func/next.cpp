#include "../head/AllLine.h"

bool AllLine::next()
{
	try
	{
		if (isEmpty())
		{
			std::cout << "File buffer is empty(please use command r to read file to buffer)." << "\n";
			return false;
		}
		nowLineNum++;
		nowLine = nowLine->nextLine;
	}
	catch (...)
	{
		std::cout << " Warning: at end of buffer" << "\n";
		std::cout << nowLineNum << " : " << getEachLine() << "\n";
		return false;
	}
	std::cout << nowLineNum << " : " << getEachLine() << "\n";
	return true;
}