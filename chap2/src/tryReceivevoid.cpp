// tryReceivevoid.cpp
#include <iostream>
#include <string>
using namespace std;
void callfunc(string a);
int main(void){
    int a;
    callfunc("Hello"); // 调用函数，与C不同的是，C++默认不会返回int类型的状态执行值
    return 0;
}

void callfunc(string a){
    cout << a << endl;
}