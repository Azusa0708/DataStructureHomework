#include "../head/AllLine.h"

bool AllLine::prior()
{
	try
	{
		if (isEmpty())
		{
			std::cout << "File buffer is empty(please use command r to read file to buffer)."
					  << "\n";
			return false;
		}
		if (nowLineNum == 0)
		{
			std::cout << " Warning: at start of buffer"
					  << "\n";
			return false;
		}
		nowLineNum--;
		nowLine = nowLine->priorLine;
	}
	catch (...)
	{
		std::cout << " Warning: can't go to prior buffer"
				  << "\n";
		return false;
	}
	return true;
}