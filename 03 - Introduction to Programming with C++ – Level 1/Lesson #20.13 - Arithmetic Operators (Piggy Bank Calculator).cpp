#include <iostream>
using namespace std;

int main()
{
	int pennies, nickels, dimes, quarters, dollars, totalPennies;

	cout << "Please enter number of pennies : ";
	cin >> pennies;

	cout << "Please enter number of nickels : ";
	cin >> nickels;

	cout << "Please enter number of dimes : ";
	cin >> dimes;

	cout << "Please enter number of quarters : ";
	cin >> quarters;

	cout << "Please enter number of dollars : ";
	cin >> dollars;

	totalPennies = (dollars * 100) + (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;

	cout << "\nTotal pennies : " << totalPennies << endl;
	cout << "Total dollars : " << totalPennies / 100.0 << endl;

	return 0;
}