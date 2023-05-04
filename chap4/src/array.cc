// array.cc -- show usage of array
#include <iostream>
#include <array>

using namespace std;

int main(void)
{
    array<int,5> ai;// 初始化一个长度为5，类型为int的矩阵
    array<double,4> ad = {1.2,2.1,3.43,4.3}; // 初始化一个长度为4，类型为double的array
    return 0;
}