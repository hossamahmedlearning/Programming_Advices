#include <iostream>
using namespace std;

enum enDaysOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;
}

enDaysOfWeek ReadDayNumber(string Message)
{
	return (enDaysOfWeek)ReadNumberInRange(Message, 1, 7);
}

string GetDayName(enDaysOfWeek Day)
{
	switch (Day)
	{
		case enDaysOfWeek::Sat:
		return "Saturday";
	case enDaysOfWeek::Sun:
		return "Sunday";
	case enDaysOfWeek::Mon:
		return "Monday";
	case enDaysOfWeek::Tue:
		return "Tuesday";
	case enDaysOfWeek::Wed:
		return "Wednesday";
	case enDaysOfWeek::Thu:
		return "Thursday";
	case enDaysOfWeek::Fri:
		return "Friday";
	default:
		return "Error";
	}
}

int main()
{
	string DayName = GetDayName(ReadDayNumber("Please Enter Day Number 1 : 7 ? "));

	cout << "\nIt's " << DayName << endl;

	return 0;
}