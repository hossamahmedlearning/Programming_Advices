#include <iostream>
using namespace std;

int calcFactorial(int number)
{
    int fact = 1;

    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    short number;

    cout << "Please enter number : ";
    cin >> number;

    cout << "\nFactorial of number " << number << " is : " << calcFactorial(number) << endl;
    return 0;
}