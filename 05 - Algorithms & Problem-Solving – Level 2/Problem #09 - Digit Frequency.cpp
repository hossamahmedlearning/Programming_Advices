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

void PrintAllDigitsFrequency(int Number)
{
	cout << endl;
	
	for (short i = 0; i <= 9; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Number);

		if(DigitFrequency > 0)
			cout << "Digit " << i << " Frequency Is " << DigitFrequency << " Time(s)." << endl;
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter a Number : ");

	PrintAllDigitsFrequency(Number);

    return 0;
}