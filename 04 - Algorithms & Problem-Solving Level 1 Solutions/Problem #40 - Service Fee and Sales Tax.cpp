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

float CalcTotalBillAfterFeeAndSalesTax(float TotalBill)
{
	TotalBill = TotalBill * 1.10;
	TotalBill = TotalBill * 1.16;

	return TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please Enter Total Bill : ");

	cout << "\nTotal Bill = " << TotalBill << endl;
	cout << "Total Bill After Service and Tax = " << CalcTotalBillAfterFeeAndSalesTax(TotalBill) << endl;

	return 0;
}