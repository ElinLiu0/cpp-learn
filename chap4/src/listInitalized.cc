// listInitailized.cc -- using {} to initialize a variable directly
#include <iostream>
using namespace std;

int main(void){
    int a{1}; // 使用列表初始化（个人不是很喜欢）
    int b = 2; // 使用等号初始化
    if(a != NULL && b != NULL){
        cout << boolalpha  << true;
    } else {
        cout << false;
    }
    cout << boolalpha << endl;
    return 0;
}