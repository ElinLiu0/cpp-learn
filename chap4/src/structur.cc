// structur.cc -- a simple structure
#include <iostream>
typedef struct inflatable // 结构体声明，其实C++中可以省略typedef关键字
{
    char name[20];
    float volume;
    double price;
};
using namespace std;
int main(void){
    inflatable guest = {
        "Glorious Gloria", // 名称
        1.88, // 库存
        29.99 // 价格
    }; // guest是一个inflatable类型的变量，其值为上面的结构体
    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}

