// ourfunc.cpp -- defining your own function
#include <iostream>
using namespace std;
void simon(int); // 定义函数原型
int main(){
    simon(3); // 调用函数
    cout << "Pick an integer: ";
    int count;
    cin >> count; // 输入一个整数
    simon(count); // 调用函数
    cout << "Done!" << endl;
    return 0;
}
void simon(int n){
    cout << "Simon says touch your toes " << n << " times." << endl;
}