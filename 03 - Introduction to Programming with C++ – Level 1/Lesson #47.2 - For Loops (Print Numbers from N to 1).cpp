#include <iostream>
using namespace std;

void printNumbersFrom1ToN(short number)
{
    for (short i = number; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()
{
    short number;

    cout << "Please enter number : ";
    cin >> number;

    cout << "*****************************\n";

    printNumbersFrom1ToN(number);

    return 0;
}