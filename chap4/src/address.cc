// address.cc --using the & operator to find address
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void){
    int donuts = 6;
    double cups = 4.5;
    char v1[10],v2[10];
    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl; // 使用&获取donuts的内存位置，地址为0x7ffd19afb0e

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl; // 地址为0x7ffd19afb0f
    /*两者的差为4，代表int为4位，double为8位，因此8-4=4*/
    return 0;
}