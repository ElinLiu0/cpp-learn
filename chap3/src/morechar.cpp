/*Author:Elin 
Create Time:2023-04-21 10:39:02
Last Modified By:Elin
Update Time:2023-04-21 10:39:02
 */
#include <iostream>
using namespace std;

int main(void){
    char ch = 'M';
    int i = ch;
    cout << "M 的 ASCII 码是 " << i << endl; // 通过将存储为int时，C++将默认把M转换为其对应的ASCII码
    ch = ch + 1; // 因为char可以表示比short更小的整型值，这个内存刚好可以存储ASCII码值，因此ch+1是有效的
    cout << "将M+1后的字符为：" << ch << endl;
    return 0;
}