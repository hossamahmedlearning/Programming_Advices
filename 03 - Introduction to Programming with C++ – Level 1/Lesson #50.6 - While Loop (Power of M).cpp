#include <iostream>
using namespace std;

int calcPower(int number, int power)
{
    int result = 1;

    while (power >= 1)
    {
        result = result * number;
        power--;
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

    cout << endl << number << "^" << power << " = " << calcPower(number, power) << endl;

    return 0;
}