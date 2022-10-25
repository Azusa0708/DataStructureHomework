#include "../head/AllLine.h"
#include<string>

bool AllLine::find(std::string findStr)
{
	try
	{
		std::string s1 = getEachLine();
		std::string s2 = findStr;
		int lenth = getEachLine().length();
		char* flag = new char[lenth]();
		int index = s1.find(s2, 0);
		if (index == -1)
		{
			return false;
		}
		else
		{
			for (int i = 0; i < findStr.length(); i++)
			{
				flag[index++] = '^';
			}
			std::cout << getEachLine() << "\n";
			for (int i = 0; i < sizeof(flag)/sizeof(flag[0])-1; i++)
				std::cout << flag[i];
			std::cout << "\n";
		}
		delete[]flag;
		return true;
	}
	catch (...)
	{
		return false;
	}
}