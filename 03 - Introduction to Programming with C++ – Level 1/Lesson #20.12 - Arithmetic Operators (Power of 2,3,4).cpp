#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Please enter a number : ";
	cin >> number;

	cout << "\nNumber^2 = " << number * number;
	cout << "\nNumber^3 = " << number * number * number;
	cout << "\nNumber^4 = " << number * number * number * number;

	cout << endl;

	return 0;
}