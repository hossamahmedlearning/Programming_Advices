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

int CountDigitFrequency(short DigitToCheck, int Number)
{
	int Remainder = 0, Counter = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (Remainder == DigitToCheck)
			Counter++;
	}

	return Counter;
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter a Number : ");
	short DigitToCheck = ReadPositiveNumber("Please Enter Digit To Search : ");

	cout << "\nDigit " << DigitToCheck << " Frequency Is " << CountDigitFrequency(DigitToCheck, Number) << " Time(s)." << endl;

    return 0;
}