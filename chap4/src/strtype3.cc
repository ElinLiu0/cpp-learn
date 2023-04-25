// strtype3.cc -- more string class features
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void){
    char charr1[20];
    char charr2[20] = "jaguar";

    string str1;
    string str2 = "panther";

    str1 = str2; // 使用C++ string类的赋值运算符
    strcpy(charr1, charr2); // 使用C函数strcpy()

    str1 += " paste"; // 使用C++ string类的加法赋值运算符
    strcat(charr1, " juice"); // 使用C函数strcat()

    int len1 = str1.size(); // 使用C++ string类的size()方法
    int len2 = strlen(charr1); // 使用C函数strlen()

    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
            << len2 << " characters.\n";
    return 0;
}