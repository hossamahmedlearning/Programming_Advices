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

void PrintDigitsInReverseOrder(int Number)
{
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		cout << Remainder << endl;
	}
}

int main()
{
	PrintDigitsInReverseOrder(ReadPositiveNumber("Please Enter a Positive Number : "));

    return 0;
}