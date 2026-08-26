#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

float ConvertHoursToWeeks(int NumberOfHours)
{
	return (float)NumberOfHours / 7 / 24;
}

float ConvertHoursToDays(int NumberOfHours)
{
	return (float)NumberOfHours / 24;
}

float ConvertDaysToWeeks(int NumberOfDays)
{
	return (float)NumberOfDays / 7;
}

int main()
{
	int TotalHours = ReadPositiveNumber("Please Enter Number Of Hours : ");
	int NumberOfDays = ConvertHoursToDays(TotalHours);
	// you can use this function (extra function)
	int NumberOfWeeks = ConvertDaysToWeeks(NumberOfDays);

	cout << "\nTotal Hours : " << TotalHours << endl;
	cout << "Total Days : " << NumberOfDays << endl;
	cout << "Total Weeks : " << ConvertHoursToWeeks(TotalHours) << endl;

	return 0;
}