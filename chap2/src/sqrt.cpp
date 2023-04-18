// sqrt.cpp --using the sqrt() function
#include <iostream>
#include <cmath> // 或者使用math.h头文件以适配C语言
using namespace std;

int main(void){
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area); // 调用来自cmath头文件中的sqrt()开根函数，函数原型为：double sqrt(double)
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}