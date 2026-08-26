#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number;

	cout << "Please enter a number : ";
	cin >> number;

	cout << "\nNumber^2 = " << pow(number, 2);
	cout << "\nNumber^3 = " << pow(number, 3);
	cout << "\nNumber^4 = " << pow(number, 4);

	cout << endl;

	return 0;
}