#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 10,20,30,40 };

    int* ptr;
    ptr = arr; // ptr point to the address of the first element in the arr

    // ptr is equivalent to &arr[0];
    // ptr + 1 is equivalent to &arr[1];
    // ptr + 2 is equivalent to &arr[2];
    // ptr + 3 is equivalent to &arr[3];

    cout << "Adresses Ara : " << endl;

    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;

    cout << "\n\nAdresses Ara Using For Loop : " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << (ptr + i) << endl;
    }

    cout << "\n\nValues Ara : " << endl;
    cout << *(ptr) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;

    cout << "\n\nValues Ara Using For Loop : " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << *(ptr + i) << endl;
    }

    return 0;
}