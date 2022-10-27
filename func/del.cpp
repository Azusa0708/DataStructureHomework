#include "../head/AllLine.h"

bool AllLine::del()
{
	try
	{
		if (LineNum == -1)
			return false;
		if (LineNum == 0) //ɾ������
		{
			nowLine = NULL;
			firstLine = NULL;
			lastLine = NULL;
			nowLineNum = -1;
			LineNum = -1;
		}
		else if (nowLineNum == LineNum) //ɾ�����һ���ڵ�
		{
			LineNum--;
			nowLine = lastLine->priorLine;
			nowLine->nextLine = NULL;
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