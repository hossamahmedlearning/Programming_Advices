#include <iostream>
using namespace std;

int main()
{
    int A = 10;
    int B = A++; // B will take the old value of A, then A will increase by 1

    cout << "B = " << B << endl; // 10
    cout << "A = " << A << endl; // 11

    B = ++A; // A will increase by 1, then B will take the new value
    cout << "B = " << B << endl; // 12
    cout << "A = " << A << endl; // 12

    return 0;
}