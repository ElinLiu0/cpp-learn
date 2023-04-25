// strtype1.cc -- using the C++ string class
#include <iostream>
#include <string> // 允许string类的使用
using namespace std;
int main(void){
    char charr1[20]; // 创建一个字符数组
    char charr2[20] = "jaguar"; // 创建并初始化一个字符数组
    string str1; // 创建一个string对象
    string str2 = "panther"; // 创建并初始化一个string对象

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1; // 使用cin读取字符串
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 // 使用cout显示字符串
         << endl;
    cout << "The third letter in " << charr2 << " is "
            << charr2[2] << endl; // 使用数组表示法访问字符
    cout << "The third letter in " << str2 << " is "
            << str2[2] << endl; // 使用数组表示法访问字符
    return 0;
}