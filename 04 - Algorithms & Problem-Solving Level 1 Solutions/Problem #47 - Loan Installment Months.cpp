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

float CalcTotalMonths(float LoanAmount, float MonthlyPayment)
{
	return LoanAmount / MonthlyPayment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount : ");
	float MonthlyPayment = ReadPositiveNumber("Please Enter Monthly Payment : ");

	cout << "\nMonths You Need To Settle The Loan : " << CalcTotalMonths(LoanAmount, MonthlyPayment) << " Months" << endl;

	return 0;
}