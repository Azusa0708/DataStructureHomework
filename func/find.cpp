#include "../head/AllLine.h"
#include<string>

bool AllLine::find(std::string findStr)
{
	try
	{
		std::string s2 = findStr;
		while(nowLineNum != LineNum)
		{
			std::string s1 = getEachLine();
			int lenth = getEachLine().length();
			char* flag = new char[lenth]();
			int index = s1.find(s2, 0);
			if (index == -1)
			{
				go(nowLineNum+1);
				continue;
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
		go(LineNum-1);
		return false;
	}
	catch (...)
	{
		return false;
	}
}