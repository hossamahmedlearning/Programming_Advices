#include <iostream>
using namespace std;

bool isEvenNumber(short number)
{
    if (number % 2 == 0)
        return true;
    else
        return false;
}

int calcSumOfEvenNumbersFrom1ToN(short number)
{
    short sum = 0;

    for (short i = 1; i <= number; i++)
    {
        if (isEvenNumber(i))
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

    cout << "Sum Of Even Numbers From 1 To " << number << " = " << calcSumOfEvenNumbersFrom1ToN(number) << endl;

    return 0;
}