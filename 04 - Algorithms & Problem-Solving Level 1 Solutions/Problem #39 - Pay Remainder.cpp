#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

float CalcRemainder(float TotalBill, float CashPaid)
{
	return CashPaid - TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please Enter Total Bill : ");
	float CashPaid = ReadPositiveNumber("Please Enter Total Cash Paid : ");

	cout << "\nTotal Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << CashPaid << endl;
	cout << "***************************";
	cout << "\nRemainder = " << CalcRemainder(TotalBill, CashPaid) << endl;

	return 0;
}