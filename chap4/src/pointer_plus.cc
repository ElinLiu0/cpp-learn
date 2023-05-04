// pointer_plus.cc shows how difference between array name + 1 and &array+1
// is different.
#include <iostream>
using namespace std;

int main(void){
    short sa[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << sa << endl; // 显示&sa[0]的值，即sa[0]的地址
    cout << &sa << endl;
    cout << &sa + 1 << endl; // 即整个sa数组的地址 + 20个字节
    return 0;
}