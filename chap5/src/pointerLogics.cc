// pointerLogics.cc -- logic expressions with pointers
#include <iostream>
using namespace std;
int main(void)
{
    int a = 10;
    int *b = &a;
    cout.setf(ios_base::boolalpha);
    cout << "a || b = " << (a || b) << endl;
    cout << "a && b = " << (a && b) << endl;
    return 0;
}