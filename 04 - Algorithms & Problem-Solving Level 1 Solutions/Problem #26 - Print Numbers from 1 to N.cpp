#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

void PrintRangeFrom1toN_UsingWhile(int Number)
{
	int Counter = 0;

	cout << "\nRange From 1 to " << Number << " Using While Loop : " << endl;

	while (Counter < Number)
	{
		Counter++;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1toN_UsingDoWhile(int Number)
{
	int Counter = 0;

	cout << "\nRange From 1 to " << Number << " Using Do While Loop : " << endl;

	do
	{
		Counter++;
		cout << Counter << endl;

	} while (Counter < Number);
}

void PrintRangeFrom1toN_UsingFor(int Number)
{
	cout << "\nRange From 1 to " << Number << " Using For Loop : " << endl;

	for (int Counter = 1; Counter <= Number; Counter++)
	{
		cout << Counter << endl;
	}
}

int main()
{
	int Number = ReadNumber("Please Enter a Number : ");

	PrintRangeFrom1toN_UsingWhile(Number);
	PrintRangeFrom1toN_UsingDoWhile(Number);
	PrintRangeFrom1toN_UsingFor(Number);

	return 0;
}