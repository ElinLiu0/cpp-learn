// pointer.cc --our first point variable
#include <iostream>
using namespace std;
int main(void){
    int updates = 6; // 声明一个整形变量
    int *p_update = &updates; // 将updates的内存复制给指针
    cout << "Values : updates = " << updates << ",p_update = " << *p_update << endl;
    cout << "Address : &update = " << &updates << ",p_update = " << p_update << endl;
    /*
        由于将updates的内存直接拷贝给了*p_update，因此p_update的内存地址与updates相同 
    */
    return 0;
}