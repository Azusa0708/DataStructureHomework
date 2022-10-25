#include "../head/AllLine.h"

bool AllLine::del()
{
	try
	{
		if (LineNum == 0) //ɾ������
		{
			LineNum--;
			nowLineNum = -1;
			delete (nowLine);
			std::cout << "File buffer is empty(please use command r to read file to buffer)."
					  << "\n";
		}
		else if (nowLineNum == LineNum) //ɾ�����һ���ڵ�
		{
			LineNum--;
			nowLine = lastLine->priorLine;
			delete (lastLine);
			lastLine = nowLine;
			nowLineNum--;
		}
		else if (nowLineNum == 0) //ɾ����һ���ڵ�
		{
			LineNum--;
			firstLine = nowLine->nextLine;
			delete (nowLine);
			nowLine = lastLine;
			nowLineNum = LineNum;
		}
		else //ɾ���м�ڵ�
		{
			LineNum--;
			EachLine *delNode = new (EachLine);
			delNode = nowLine; //ɾ���ڵ����delNode
			nowLine = delNode->priorLine;
			nowLine->nextLine = delNode->nextLine;
			nowLine = delNode->nextLine;
			nowLine->priorLine = delNode->priorLine;
			delete (delNode);
			nowLine = lastLine;
			nowLineNum = LineNum;
		}
		return true;
	}
	catch (...)
	{
		return false;
	}
}