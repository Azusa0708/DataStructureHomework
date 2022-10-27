#include "../head/AllLine.h"
#include <string>

bool AllLine::find(std::string findStr)
{
	try
	{
		std::string s2 = findStr;
		while (nowLineNum <= LineNum)
		{
			std::string s1 = getEachLine();
			int lenth = getEachLine().length();
			std::string flag(lenth, ' ');
			int index = s1.find(s2);
			if (index == std::string::npos)
			{
				if (nowLineNum < LineNum)
				{
					go(nowLineNum + 1);
					continue;
				}
				else
				{
					break;
				}
			}
			else
			{
				for (int i = 0; i < findStr.length(); i++)
				{
					flag[index++] = '^';
				}
				std::cout << getEachLine() << "\n";
				for (int i = 0; i < lenth; i++)
					std::cout << flag[i];
				std::cout << "\n";
			}
			return true;
		}
		go(LineNum);
		return false;
	}
	catch (...)
	{
		return false;
	}
}