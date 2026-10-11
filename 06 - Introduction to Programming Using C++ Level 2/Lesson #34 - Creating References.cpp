#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int& x = a; // create an alias name for a called x (both has the same value)

    cout << &a << endl;
    cout << &x << endl;

    cout << a << endl;
    cout << x << endl;

    x = 100;

    cout << a << endl;
    cout << x << endl;

    return 0;
}