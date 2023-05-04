// delete.cpp -- using delete operator
#include <iostream>
#include <cstring> // or string.h
using namespace std;
char *getname(void); // 定义函数原型
int main(void)
{
    char *name; // 创建指针

    name = getname(); // 调用函数，并将返回值赋给name
    cout << name << " at " << (int *)name << "\n"; // 这里使用(int *)将name转换为16进制数的地址
    delete [] name; // 释放内存

    name = getname(); // 忽略被释放的内存
    cout << name << " at " << (int *)name << "\n";
    delete [] name; // 释放内存
    return 0;
}

char * getname(){
    char temp[80]; // 创建临时数组，长度为80
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char(strlen(temp) + 1); // 创建一个新的数组，长度为temp的长度+1
    strcpy(pn, temp); // 将temp的值复制到pn中
    return pn; // 返回pn的地址
}