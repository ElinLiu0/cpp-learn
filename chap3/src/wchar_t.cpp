/*Author:Elin 
Create Time:2023-04-21 11:18:58
Last Modified By:Elin
Update Time:2023-04-21 11:18:58
 */
#include <iostream>
using namespace std;
int main(void){
    wchar_t chinese_hanzi = L'好'; // 通过使用L前缀来定义宽字符
    wcout << L'好' << endl; // 使用wcout来输出宽字符
    return 0;
}