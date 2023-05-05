// formore.cc -- more looping with for
#include <iostream>
const int ArSize = 16;      // example of external declaration
using namespace std;
int main(void)
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL; // 0! = 1! = 1
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1]; // 计算阶乘
    for (int i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << endl;
    return 0;
}