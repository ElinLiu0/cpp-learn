// myfirst.cpp --display a message
#include <iostream> // 导入iostream预处理的头文件
using namespace std; // 使用命名空间std
int main(){ // cpp与c最本质不同的地方，在于main函数必须通过状态值0/1/-1以判断其退出状态
    cout << "Come up and C++ me some time."; // 使用cout进行输出
    cout << endl; // 使用endl进行行更换
    cout << "You won't regret it!" << endl;
    return 0; // 请务必要返回状态！
}