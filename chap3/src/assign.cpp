// assign.cpp --type changes on initialization
#include <iostream>
using namespace std;
int main(void){
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree = 3; // 将整形转换为浮点型
    int guess(3.9832); //将double转换为整形
    int debt = 7.2E12; // C++未定义的结果
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;  
}