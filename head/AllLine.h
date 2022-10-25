#pragma once
#include "EachLine.h"
/*
请将每个func存为1个cpp文件写,并将文件名字命名为funcName.cpp
*/
class AllLine
{
private:
    EachLine *nowLine;   //当前节点
    EachLine *firstLine; //头节点
    EachLine *lastLine;  //尾节点
    int nowLineNum;      //现在所在行数
    int LineNum;         //总行数

public:
    AllLine()
    {
        nowLine = NULL;
        firstLine = NULL;
        lastLine = NULL;
        nowLineNum = -1;
        LineNum = -1;
    };                                 //构造函数
    void setEachLine(std::string str); //设置文本
    std::string getEachLine();         //得到文本
    void createLines();                //创建链表

    bool isEmpty();                      //判断是否为空
    EachLine *indexValue(int findIndex); //通过下标获取该行的值如 EachLine* nowLinePtr = indexValue(1)

    // void begin();         //跳转第0行
    bool go(int rowToGo); //跳转指定行
    // void end();           //跳转尾行
    //三个函数可以考虑合成为一个

    void view(); //观看所有文本
    void meau(); //每次输入指令后的结尾菜单

    // bool表示操作不成功返回false 成功返回true
    bool del();                                                 //删除本行
    bool find(std::string findStr);                             //查找字符串
    bool insert(int addLineNum, std::string insertStr);         //插入一行
    bool next();                                                //下一行
    bool prior();                                               //上一行
    bool substitute(int subLineNum);                            //修改一行
    bool write(std::string writeStr);                           //末尾添加一行
    bool change(std::string changeStr, std::string changedStr); //改变一个字符串为另一个

    int length(bool command = false); //返回总行数且输出该行信息

    static void help(); //帮助菜单

    bool read(std::string fileInPath);  //读取文件 输入文件目录 输出是否读取成功
    bool quit(std::string fileOutPath); //退出时写入数据至输出文件 输入输出文件目录 输出是否输出成功
};