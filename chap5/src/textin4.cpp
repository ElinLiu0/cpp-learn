//textin4.cc -- old ways in C 
#include <iostream>
using namespace std;

int main(void)
{
    int ch;
    int count = 0;

    while((ch = cin.get()) != EOF) // 考虑到EOF本身是一个被定义的宏，所以这里使用int类型来接收cin.get()的返回值。
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}