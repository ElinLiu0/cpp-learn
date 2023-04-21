// limits.cpp -- shown each types maxout
#include <iostream>
#include <climits>
using namespace std;
int main(void){
    int n_int = INT_MAX; // INT_MAX has defined int types max length
    short n_short = SHRT_MAX; // SHRT_MAX has defined short int types max length
    long n_long = LONG_MAX; // LONG_MAX has defined long int types max length
    long long n_llong = LLONG_MAX; // LLONG_MAX has defined long long int types max length

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    // sizeof types max length
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    // sizeof types min length
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}