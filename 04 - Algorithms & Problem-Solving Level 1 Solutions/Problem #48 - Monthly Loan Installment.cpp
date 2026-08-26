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

float CalcMonthlyInstallment(float LoanAmount, float NumberOfMonths)
{
	return LoanAmount / NumberOfMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount : ");
	float NumberOfMonths = ReadPositiveNumber("How Many Months You Need To Settle The Loan : ");

	cout << "\nMonthly Installment Amount : " << CalcMonthlyInstallment(LoanAmount, NumberOfMonths) << " $" << endl;

	return 0;
}