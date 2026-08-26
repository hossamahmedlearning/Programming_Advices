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

bool IsPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}

void PrintResult(int Number)
{
	if (IsPalindromeNumber(Number))
		cout << "\nYes, It Is a Palindrome Number." << endl;
	else
		cout << "\nNo, It Is Not a Palindrome Number." << endl;
}

int main()
{
	PrintResult(ReadPositiveNumber("Please Enter a Positive Number : "));

    return 0;
}