// convert.cpp --converts stone to pounds(将英石转换为磅)
#include <iostream>
int stonetolb(int); // 函数原型
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone:";
    cin >> stone;
    const unsigned int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stonetolb(int sts){
    return 14 * sts;
}