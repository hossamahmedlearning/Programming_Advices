#include <iostream>
using namespace std;

struct stPiggyBankInfo
{
	int  Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankInfo ReadPiggyBankInfo()
{
	stPiggyBankInfo PiggyBankInfo;

	cout << "Please Enter Total Number Of Pennies : ";
	cin >> PiggyBankInfo.Pennies;

	cout << "Please Enter Total Number Of Nickels : ";
	cin >> PiggyBankInfo.Nickels;

	cout << "Please Enter Total Number Of Dimes : ";
	cin >> PiggyBankInfo.Dimes;

	cout << "Please Enter Total Number Of Quarters : ";
	cin >> PiggyBankInfo.Quarters;

	cout << "Please Enter Total Number Of Dollars : ";
	cin >> PiggyBankInfo.Dollars;

	return PiggyBankInfo;
}

int CalcTotalPennies(stPiggyBankInfo PiggyBankInfo)
{
	int TotalPennies = (PiggyBankInfo.Dollars * 100) +
		(PiggyBankInfo.Quarters * 25) + (PiggyBankInfo.Dimes * 10) +
		(PiggyBankInfo.Nickels * 5) + PiggyBankInfo.Pennies;

	return TotalPennies;
}

int main()
{
	int TotalPennies = CalcTotalPennies(ReadPiggyBankInfo());

	cout << "\nTotal Pennies = " << TotalPennies << endl;
	cout << "Total Dollars = " << (float)TotalPennies / 100 << "$" << endl;

	return 0;
}