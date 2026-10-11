#include <iostream>

using namespace std;

void SwapUsingReferences(int& n1, int& n2)
{
    int temp;

    temp = n1;
    n1 = n2;
    n2 = temp;
}

void SwapUsingPointers(int* n1, int* n2)
{
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a = 1, b = 2;

    cout << "Before Swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    SwapUsingReferences(a, b);
    cout << "\nAfter Swapping Using References" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    SwapUsingPointers(&a, &b);
    cout << "\nAfter Swapping Using Pointers" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}