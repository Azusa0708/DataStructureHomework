#include "../head/AllLine.h"

bool AllLine::change(std::string changeStr, std::string changedStr)
{
	try
	{
		std::string theStringNow;
		theStringNow = getEachLine();
		theStringNow.replace(theStringNow.find(changeStr),changeStr.length(),changedStr);
		setEachLine(theStringNow);
		return true;
	}
	catch (...)
	{
		return false;
	}
}