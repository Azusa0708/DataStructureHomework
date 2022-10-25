#include "../head/AllLine.h"

bool AllLine::change(std::string changestr, std::string changedstr)
{
	std::string theStringNow = changestr; // theStringNow �տ�ʼʱ�ڵ�������
	try
	{
		theStringNow.replace(theStringNow.find(changestr), changedstr.length(), changedstr);
		setEachLine(theStringNow);
		return true;
	}
	catch (...)
	{
		return false;
	}
}