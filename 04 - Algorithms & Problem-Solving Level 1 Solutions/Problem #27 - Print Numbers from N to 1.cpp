#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

void PrintRangeFromNto1_UsingWhile(int Number)
{
	int Counter = Number + 1;

	cout << "\nRange From " << Number << " to 1 Using While Loop : " << endl;

	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}

void PrintRangeFromNto1_UsingDoWhile(int Number)
{
	int Counter = Number + 1;

	cout << "\nRange From " << Number << " to 1 Using Do While Loop : " << endl;

	do
	{
		Counter--;
		cout << Counter << endl;

	} while (Counter > 1);
}

void PrintRangeFromNto1_UsingFor(int Number)
{
	cout << "\nRange From " << Number << " to 1 Using For Loop : " << endl;

	for (int Counter = Number; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main()
{
	int Number = ReadNumber("Please Enter a Number : ");

	PrintRangeFromNto1_UsingWhile(Number);
	PrintRangeFromNto1_UsingDoWhile(Number);
	PrintRangeFromNto1_UsingFor(Number);

	return 0;
}