#include <iostream>
#include <cmath>
using namespace std;

int calcNumberPower2(int number)
{
	return pow(number, 2);
}

int calcNumberPower3(int number)
{
	return pow(number, 3);
}

int calcNumberPower4(int number)
{
	return pow(number, 4);
}

int main()
{
	int number;

	cout << "Please enter a number : ";
	cin >> number;

	cout << "\nNumber^2 = " << calcNumberPower2(number);
	cout << "\nNumber^3 = " << calcNumberPower3(number);
	cout << "\nNumber^4 = " << calcNumberPower4(number);

	cout << endl;

	return 0;
}