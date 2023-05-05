// cctype.cc -- using the ctype.h library
#include <iostream>
#include <cctype>
using namespace std;

int main(void)
{
    cout << "Enter text for analysis, and type @"
        " to termintae input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch); // 获取第一个字符
    while (ch != '@')
    {
        if(isalpha(ch)) // 检测是否为字母
            chars++;
        else if(isspace(ch)) // 检测是否为空白字符
            whitespace++;
        else if(isdigit(ch)) // 检测是否数值型
            digits++;
        else if(ispunct(ch)) // 检测是否为标点符号
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << "Total of:" << endl;
    cout << "  " << chars << " letters, " << endl;
    cout << "  " << whitespace << " whitespace, " << endl;
    cout << "  " << digits << " digits, " << endl;
    cout << "  " << punct << " puntuations, " << endl;
    cout << "  " << others << " others." << endl;
    return 0;
}