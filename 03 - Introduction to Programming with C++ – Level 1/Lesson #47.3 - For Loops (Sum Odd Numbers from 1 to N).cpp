#include <iostream>
using namespace std;

bool isOddNumber(short number)
{
    if (number % 2 != 0)
        return true;
    else
        false;
}

int calcSumOfOddNumbersFrom1ToN(short number)
{
    short sum = 0;

    for (short i = 1; i <= number; i++)
    {
        if (isOddNumber(i))
            sum += i;
    }

    return sum;
}

int main()
{
    short number;

    cout << "Please enter number : ";
    cin >> number;

    cout << "*****************************\n";

    cout << "Sum Of Odd Numbers From 1 To " << number << " = " << calcSumOfOddNumbersFrom1ToN(number) << endl;

    return 0;
}