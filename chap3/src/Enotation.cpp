/*Author:Elin 
Create Time:2023-04-21 11:33:24
Last Modified By:Elin
Update Time:2023-04-21 11:33:24
 */
#include <iostream>
using namespace std;
int main(void){
    float a = 2.52e+8; // 使用e表示法，代表2.52x10的正八次幂
    float b = 8.33E-4; // E和e本质无差，但-4代表8.33x10的负4次幂
    float c = 1.23E10; // 在符号缺省的情况下，C++默认将其编译为正
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}