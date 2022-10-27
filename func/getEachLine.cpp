#include "../head/AllLine.h"

std::string AllLine::getEachLine()
{
	if (!nowLine->eachLine.empty())
		return nowLine->eachLine;
	else
		return "";
}
