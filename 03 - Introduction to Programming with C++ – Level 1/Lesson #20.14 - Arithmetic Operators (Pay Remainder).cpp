#include <iostream>
using namespace std;

int main()
{
	float totalBill, totalCashPaid, remainder;

	cout << "Please enter total bill : ";
	cin >> totalBill;

	cout << "Please enter total cash paid : ";
	cin >> totalCashPaid;

	remainder = totalCashPaid - totalBill;

	cout << "\nRemainder : " << remainder << endl;

	return 0;
}