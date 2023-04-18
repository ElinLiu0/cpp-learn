// functionc.cpp
#include <iostream>
using namespace std;

int calFunc(int a){
    return a + a;
}

int main(void){
    int a;
    cout << "Input :";
    cin >> a;
    cout << "Print :" << calFunc(a) << endl;
    return 0;
}