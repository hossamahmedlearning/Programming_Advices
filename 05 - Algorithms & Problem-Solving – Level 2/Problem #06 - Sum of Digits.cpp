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

int CalcSumOfDigits(int Number)
{
	int Remainder = 0, Sum = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		Sum += Remainder;
	}

	return Sum;
}

int main()
{
	int Sum = CalcSumOfDigits(ReadPositiveNumber("Please Enter a Positive Number : "));

	cout << "\nSum Of Digits = " << Sum << endl;

    return 0;
}