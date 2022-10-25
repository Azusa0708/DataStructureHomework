#pragma once
#include <string>
#include <iostream>

struct EachLine // Node结构体
{
    std::string eachLine;       //本行文本
    EachLine *nextLine = NULL;  //下一行的指针
    EachLine *priorLine = NULL; //上一行的指针
};
