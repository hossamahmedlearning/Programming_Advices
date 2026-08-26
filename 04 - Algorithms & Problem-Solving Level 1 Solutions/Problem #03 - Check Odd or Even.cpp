#include <iostream>
using namespace std;

enum enOddEven { Odd = 1, Even = 2 };

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

enOddEven CheckNumberType(int Number)
{
	if (Number % 2 == 0)
		return enOddEven::Even;
	else
		return enOddEven::Odd;
}

void PrintResult(enOddEven NumberType)
{
	if (NumberType == enOddEven::Odd)
		cout << "\nNumber Is Odd." << endl;
	else
		cout << "\nNumber Is Even." << endl;
}

int main()
{
	PrintResult(CheckNumberType(ReadNumber("Please Enter a Number : ")));

	return 0;
}