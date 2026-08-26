#include <iostream>
using namespace std;

short ReadAge()
{
	short Age = 0;

	cout << "Please Enter Your Age : ";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Age, int From, int To)
{
	return (Age >= From && Age <= To);
}

short ReadUntilAgeBetween(short From, short To)
{
	short Age = 0;

	do
	{
		cout << "Please Enter an Age Between " << From << " and " << To << " : ";
		Age = ReadAge();

	} while (!ValidateNumberInRange(Age, From, To));

	return Age;
}

void PrintResult(short Age)
{
	cout << "Your Age Is : " << Age << endl;
}

int main()
{
	PrintResult(ReadUntilAgeBetween(18, 45));

	return 0;
}
