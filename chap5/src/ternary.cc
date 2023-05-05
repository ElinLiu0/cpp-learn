// ternary.cc -- using ternary for logic expression
#include <iostream>
using namespace std;

int main(void)
{
    cout.setf(ios_base::boolalpha);
    bool result = 1 < 2 ? 2 > 1 : 1 == 2;
    cout << result << endl;
    /*
        1 < 2 = true
        执行2>1
        赋值给result
    */
    bool result2 = 1 > 2 ? 2 > 1 : 1 == 2 ? 2 < 1 : 1 != 2;
    cout << result2 << endl;
    return 0;
}