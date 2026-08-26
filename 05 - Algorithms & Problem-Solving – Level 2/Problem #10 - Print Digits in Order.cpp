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

int ReverseNumber(int Number)
{
	int Remainder = 0, ReversedNumber = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		ReversedNumber = (ReversedNumber * 10) + Remainder;
	}

	return ReversedNumber;
}

void PrintDigitsInOrder(int Number)
{
	int Remainder = 0;

	Number = ReverseNumber(Number);

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		cout << Remainder << endl;
	}
}

int main()
{
	PrintDigitsInOrder(ReadPositiveNumber("Please Enter a Positive Number : "));

    return 0;
}