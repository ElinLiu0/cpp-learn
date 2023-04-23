// why_not_auto.cpp -- why not auto?
#include <iostream>
using namespace std;
int main(void){
    cout.setf(ios_base::fixed, ios_base::floatfield);
    auto x = 0.0; // 此时x是double类型0.0，符合预期
    double y = 0; // 此时虽然y的字面值为0，但是在编译器内部会被隐式转换为double类型0.0
    auto z = 0; // 此时z是int类型0，与预期不符
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}