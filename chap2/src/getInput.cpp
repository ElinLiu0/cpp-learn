// getinput.cpp -- input and output

#include <iostream>
using namespace std;

int main(void){
    int number;
    cout << "You have input: ";
    cin >> number; // 使用cin从键盘输入，由于cin和cout调用的运算符的指向不同，因此不能将输入输出写在一行上
    cout << "The number is: " << number << endl;
    cin.get();
}