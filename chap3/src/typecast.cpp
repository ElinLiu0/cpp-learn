// typecast.cpp -- forcing type changes
#include <iostream>
using namespace std;
int main(void){
    int auks,bats,coots;
    // 先以浮点数据类型计算，然后强制转换为整数
    auks = 19.99 + 11.99;

    // 从源数据上对目标进行强制转换（即阶段）
    bats = (int) 19.99 + (int) 11.99; // 在旧版C中，待转换的类型需定义在字面值前
    coots = int(19.99) + int(11.99); // 在C++中，可在字面值前加上类型名，但字面值需要用括号括起来
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;
    

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl; // 显示ch的ASCII码
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl; // 使用static_cast进行强制转换
    return 0;
}