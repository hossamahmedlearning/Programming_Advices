#include <iostream>
using namespace std;

int main()
{
	int loanAmount, monthlyPayment, months;

	cout << "Please enter loan amount : ";
	cin >> loanAmount;

	cout << "Please enter number of months to settle the loan : ";
	cin >> months;

	monthlyPayment = loanAmount / months;

	cout << "\nMonthly installment amount : " << monthlyPayment << " $" << endl;

	return 0;
}