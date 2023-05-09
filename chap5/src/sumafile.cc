// sumafile.cc -- function with array argument
#include <iostream>
#include <fstream> // 文件I/O支持
#include <cstdlib> // 支持exit()
const int SIZE = 60; // 文件名的最大长度
using namespace std;
int main(void)
{
    char filename[SIZE]; // 存储文件名
    ifstream inFile; // 用于处理文件输入（读入）
    cout << "Enter name of data file: ";
    cin.getline(filename,SIZE);
    inFile.open(filename); // 与文件关联
    if (!inFile.is_open()) // 打开失败
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0; // 读取的值的个数
    inFile >> value; // 获取第一个值
    while (inFile.good()) // 检查输入是否成功
    {
        ++count; // 计数
        sum += value; // 求和
        inFile >> value; // 获取下一个值
    }
    if(inFile.eof()) // 到达文件末尾
        cout << "End of file reached.\n";
    else if (inFile.fail()) // 输入类型错误
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if(count == 0){
        cout << "No data processed.\n";
    } else {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close(); // 关闭文件
    return 0;
}