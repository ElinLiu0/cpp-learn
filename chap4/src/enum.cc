// enum.cc --show how enum exactly work
#include <iostream>
using namespace std;
enum band{red, yellow, green, blue, violet, indigo, ultraviolet};
int main(void){
    band color;
    color = red; // 通过直接将枚举量赋值给枚举变量
    cout << color << endl;
    color = band(3); // 通过将整形变量复制给枚举变量
    cout << color << endl;
    int color2 = ultraviolet; // 通过将枚举量赋值给整形变量
    cout << color2 + green << endl;
    // try
    // {
    //     band color3 = band(color2) + band(green); /*
    //         / 此时band(color2)+band(green)是无法执行的，因为band不知道如何将int隐式转换为与自身相同的类型
    //     */
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    enum bits{one = 1,two = 2};
    cout << one << endl;
    return 0;
}