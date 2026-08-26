#include <iostream>
using namespace std;


int main()
{
    int number = 0, sum = 0;

    while (number != -99)
    {
        sum += number;

        cout << "Enter number : ";
        cin >> number;
    }

    cout << "\nResult = " << sum << endl;

    return 0;
}