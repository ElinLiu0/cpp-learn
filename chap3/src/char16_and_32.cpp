/*Author:Elin 
Create Time:2023-04-21 11:23:26
Last Modified By:Elin
Update Time:2023-04-21 11:23:26
 */
#include <iostream>
using namespace std;

int main(void){
    char16_t ch1 = u'q'; // 使用16位存储的字符格式
    char32_t ch2 = U'\U0000222B'; // 使用32位存储的字符格式
    cout << ch1 << endl;
    cout << ch2 << endl;
    return 0;
}