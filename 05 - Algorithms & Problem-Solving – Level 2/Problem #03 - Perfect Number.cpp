#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

bool IsPerfectNumber(int Number)
{
	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}

	return Number == Sum;
}

void PrintResult(int Number)
{
	if (IsPerfectNumber(Number))
		cout << "\n" << Number << " Is Perfect Number." << endl;
	else
		cout << "\n" << Number << " Is Not Perfect Number." << endl;
}

int main()
{
	PrintResult(ReadPositiveNumber("Please Enter a Positive Number : "));

    return 0;
}