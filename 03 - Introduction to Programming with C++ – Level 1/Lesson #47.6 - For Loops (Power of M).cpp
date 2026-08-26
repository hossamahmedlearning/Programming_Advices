#include <iostream>
using namespace std;

int calcPower(int number, int power)
{
    int result = 1;

    for (int i = 1; i <= power; i++)
    {
        result = result * number;
    }

    return result;
}

int main()
{
    int number, power;

    cout << "Please enter number : ";
    cin >> number;

    cout << "Please enter power : ";
    cin >> power;

    cout << "\n" << number << "^" << power << " = " << calcPower(number, power) << endl;

    return 0;
}