// fltadd.cpp -- precision problems with float

#include <iostream>
using namespace std;
int main(void){
    float a = 2.34E+22f; // a存储了一个23位的数字
    float b = a + 1.0f; // 由于float的有效位数为6-7，因此+1并不会改变原值大小
    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    return 0;
}