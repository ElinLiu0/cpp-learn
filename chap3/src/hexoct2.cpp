/*Author:Elin 
Create Time:2023-04-21 10:16:57
Last Modified By:Elin
Update Time:2023-04-21 10:16:57
 */
#include <iostream>
using namespace std;
int main(void){
    int a = 42;
    cout << "a in decimal = " << a << endl; // 使用十进制进行打印
    cout << hex; // 通过hex控制符告诉cout以16进制的方式打印a
    cout << "a in hexadecimal = " << a << endl;
    cout << oct; // 通过oct控制符告诉cout以8进制方式打印a
    cout << "a in octal = " << a << endl;
    return 0;
}