#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 50;

    cout << "a Value       = " << a << endl;
    cout << "a Address     = " << &a << endl;

    int* p = &a;
    cout << "Pointer Value (a) = " << p << endl;

    p = &b;
    cout << "Pointer Value (b) = " << p << endl;

    return 0;
}