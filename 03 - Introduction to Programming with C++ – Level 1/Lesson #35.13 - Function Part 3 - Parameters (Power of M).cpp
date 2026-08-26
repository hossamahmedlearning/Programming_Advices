#include <iostream>
#include <cmath>
using namespace std;

int calcPower(int number, int power)
{
	return pow(number, power);
}

int main()
{
	int number, power;

	cout << "Please enter a number : ";
	cin >> number;

	cout << "Please enter a power : ";
	cin >> power;

	cout << endl << number << "^" << power << " = " << calcPower(number, power) << endl;

	return 0;
}