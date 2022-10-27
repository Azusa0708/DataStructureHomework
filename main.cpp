#include "head/AllLine.h"

int main()
{
    AllLine *allLine = new AllLine();
    allLine->createLines();
    char command = 'h';
    std::string outPath;
    std::cout << "Please input outputfile name(eg. file_out.txt):";
    getchar();
    std::getline(std::cin, outPath);
    AllLine::help();
    while (command != 'q')
    {
        bool isOPSuccess = true;
        allLine->meau();
        std::cout << "\n&&";
        std::string str;
        std::getline(std::cin, str);
        command = str[0];
        switch (command)
        {
        case 'b':
            allLine->go(0);
            break;
        case 'c':
        {
            std::string changeStr, changedStr;
            std::cout << "What text segment do U want to replace? ";
            std::getline(std::cin, changeStr);
            std::cout << "What new text segment do U want to add in. ";
            std::getline(std::cin, changedStr);
            isOPSuccess = allLine->change(changeStr, changedStr);
            if (!isOPSuccess)
                std::cout << "String was not found." << std::endl;
        }
        break;
        case 'd':
            isOPSuccess = allLine->del();
            break;
        case 'e':
            allLine->go(allLine->length() - 1);
            break;
        case 'f':
        {
            std::cout << "Enter string to search for: ";
            std::string findStr;
            std::getline(std::cin, findStr);
            if (!allLine->find(findStr))
            {
                std::cout << "String was not found." << std::endl;
            }
        }
        break;
        case 'g':
        {
            int rowToGo;
            std::cout << "Goto what line number? ";
            std::cin >> rowToGo;
            if (std::cin.fail())
            {
                std::cout << "Input error, reload the command pls" << std::endl;
                std::cin.clear();
                std::cin.ignore(2048, '\n');
                break;
            }
            isOPSuccess = allLine->go(rowToGo);
            getchar();
        }
        break;
        case 'h':
            AllLine::help();
            break;
        case 'i':
        {
            int addLineNum;
            std::string insertStr;
            std::cout << "Insert what line number. ";
            std::cin >> addLineNum;
            if (std::cin.fail())
            {
                std::cout << "Input error, reload the command pls" << std::endl;
                std::cin.clear();
                std::cin.ignore(2048, '\n');
                break;
            }
            std::cout << "What is the new line to insert? ";
            getchar();
            std::getline(std::cin, insertStr);
            isOPSuccess = allLine->insert(addLineNum, insertStr);
        }
        break;
        case 'l':
            allLine->length(true);
            break;
        case 'n':
            isOPSuccess = allLine->next();
            break;
        case 'p':
            isOPSuccess = allLine->prior();
            break;
        case 'r':
        {
            std::string filePath;
            std::cout << "Input the read path of file: ";
            std::getline(std::cin, filePath);
            isOPSuccess = allLine->read(filePath);
        }
        break;
        case 's':
        {
            int subLineNum;
            std::cout << " Substitute what line number? ";
            std::cin >> subLineNum;
            isOPSuccess = allLine->substitute(subLineNum);
            getchar();
        }
        break;
        case 'v':
            allLine->view();
            break;
        case 'w':
        {
            std::string writeStr;
            std::cout << "Input the line U want to write: ";
            std::getline(std::cin, writeStr);
            isOPSuccess = allLine->write(writeStr);
        }
        break;
        case 'q':
            break;
        default:
            std::cout << "command error, reload input command" << std::endl;
            break;
        }
        if (!isOPSuccess)
            std::cout << "Command execution error" << std::endl;
    }
    if (allLine->quit(outPath))
    {
        std::cout << "Quit program success" << std::endl;
    }
    else
    {
        std::cout << "Save data error" << std::endl;
    }
    return 0;
}