#include <iostream>
using namespace std;

int readPositiveNumber()
{
    int number;

    cout << "Please enter number : ";
    cin >> number;

    while (number <= 0)
    {
        cout << "Wrong number, Please enter positive number : ";
        cin >> number;
    }

    return number;
}

int calcFactorial(int number)
{
    int fact = 1;
    
    while (number >= 1)
    {
        fact = fact * number;
        number--;
    }

    return fact;
}

int main()
{
    int number = readPositiveNumber();

    cout << "\nFactorial Of " << number << " is : " << calcFactorial(number) << endl;

    return 0;
}