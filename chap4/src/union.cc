// union.cc --show how union exactly work
#include <iostream>
using namespace std;

union one4all // 共用体最多只能存储一种数据类型
{
    int int_val; // 存储int类型
    long long_val; // 存储long类型
    double double_val; // 存储long类型
};

int main(void){
    one4all u;
    u.int_val = 15; // 存储了double
    cout << u.int_val << endl;
    u.double_val = 1.38; // 存储了int
    cout << u.double_val << endl;
    cout << u.int_val << endl; // 为什么u.int_val= -515396076 ?
    return 0;
}