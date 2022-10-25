#include "../head/AllLine.h"

bool AllLine::write(std::string writeStr)
{
	try
	{
		LineNum++;
		nowLineNum++;
		EachLine *newTail = new (EachLine); //�µ�β�ڵ�
		newTail->eachLine = writeStr;		//���ַ���ֵ
		newTail->priorLine = lastLine;
		lastLine->nextLine = newTail;
		newTail->nextLine = NULL;
		lastLine = newTail;
		nowLine = newTail;
		return true;
	}
	catch (...)
	{
		return false;
	}
}