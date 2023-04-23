// floatnum.cpp -- floating-point types
#include <iostream>
using namespace std;
int main(void){
    cout.setf(ios_base::fixed, ios_base::floatfield); // 使用setf(set format)设置浮点数的格式
    float tub = 10.0 / 3.0; // 6位有效数字
    double mint = 10.0 / 3.0; // 15位有效数字
    const float million = 1.0e6;
    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;
    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    return 0;
}