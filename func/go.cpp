#include "../head/AllLine.h"

bool AllLine::go(int rowToGo)
{
	if (rowToGo > LineNum || rowToGo < 0)
	{
		std::cout << " Warning: No such line"
				  << "\n";
		return false;
	}
	else
	{
		if (rowToGo > nowLineNum)
		{
			int stepToGo = rowToGo - nowLineNum;
			while (stepToGo--)
			{
				nowLine = nowLine->nextLine;
				nowLineNum++;
			}
			return true;
		}
		else
		{
			int stepToGo = nowLineNum - rowToGo;
			while (stepToGo--)
			{
				nowLine = nowLine->priorLine;
				nowLineNum--;
			}
			return true;
		}
	}
}