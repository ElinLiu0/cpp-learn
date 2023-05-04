// at.cc --shows how to use at() to access elements
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "v[2] = " << v[2] << endl;
    cout << "v.at(2) = " << v.at(2) << endl;

    try
    {
        cout << "v.at(10) = " << v.at(10) << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}