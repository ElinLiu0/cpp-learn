// newstrct.cpp --using new with a structure
#include <iostream>
using namespace std;
struct inflatable // 定义结构体
{
    char name[20];
    float volume;
    double price;
};

int main(void){
    inflatable *ps = new inflatable(); // 使用new为结构体分配内存
    cout << "Enter name of inflatable item: ";
    cin >> ps->name;
    cout << "Enter volume of inflatable item: ";
    cin >> ps->volume;
    cout << "Enter price $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl; // 使用指针访问结构体成员
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps; // 使用delete释放内存
    return 0;
}