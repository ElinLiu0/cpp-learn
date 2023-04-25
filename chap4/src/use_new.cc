// use_new.cc -- using the new operator
#include <iostream>
using namespace std;

int main(void){
    int nights = 1001;
    int *pt = new int; // 通过new关键字初始化新内存

    *pt = 1001; // 在新内存中存储值
    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    double *pd = new double; // 分配内存以存储double类型的值
    *pd = 10000001.0; // 在新内存中存储double类型的值

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    return 0;
}