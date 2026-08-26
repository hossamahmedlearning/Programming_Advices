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

int CalcFactorial(int Number)
{
	int Fact = 1;

	for (int Counter = Number; Counter >= 1; Counter--)
	{
		Fact *= Counter;
	}

	return Fact;
}

void PrintResult(int Number)
{
	cout << "\nFactorial Of \"" << Number << "\" Is : " << CalcFactorial(Number) << endl;
}

int main()
{
	PrintResult(ReadPositiveNumber("Please Enter a Positive Number : "));

	return 0;
}