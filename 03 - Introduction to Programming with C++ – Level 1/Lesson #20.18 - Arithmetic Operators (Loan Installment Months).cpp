#include <iostream>
using namespace std;

int main()
{
	int loanAmount, monthlyPayment, months;

	cout << "Please enter loan amount : ";
	cin >> loanAmount;

	cout << "Please enter monthly payment : ";
	cin >> monthlyPayment;

	months = loanAmount / monthlyPayment;

	cout << "\nNumber of months : " << months << " Months" << endl;

	return 0;
}