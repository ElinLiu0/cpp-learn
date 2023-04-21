/*Author:Elin 
Create Time:2023-04-21 10:50:34
Last Modified By:Elin
Update Time:2023-04-21 10:50:34
 */
#include <iostream>
using namespace std;
int main(void){
    cout << "\aOperation \"HyperHype\" is now activated!\n"; // \a是响铃符号，但是无论一个语句中有多少个\a，计算机都只会响一次
    cout << "Enter your agent code:______\b\b\b\b\b\b"; // \b是退格符号，退格符号会把光标向左移动一格，但是不会删除任何字符
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    return 0;
}