#include "../head/AllLine.h"

int AllLine::length(bool command)
{
	if (command)
		std::cout << "There are " << LineNum + 1 << " lines in the file. Current line lenth is " << nowLine->eachLine.length() << std::endl;
	return LineNum + 1;
}