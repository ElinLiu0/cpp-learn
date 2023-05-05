//textin3.cc -- reading chars to end of file.
#include <iostream>
using namespace std;

int main(void)
{
    char ch;
    int count = 0;
    cin.get(ch);
    while(cin.fail() == false)
    /*
        使用cin.fail()来判断是否输出为EOF。
        通常在Linux上或类UNIX系统上通过键盘输入EOF的方法是Ctrl+D。
        在Windows上通过键盘输入EOF的方法是Ctrl+Z。
    */
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}