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

int SumOddNumbersFrom1toN_UsingWhile(int Number)
{
	int Counter = 0, Sum = 0;

	while (Counter < Number)
	{
		Counter++;
		
		if (CheckNumberType(Counter) == enOddEven::Odd)
		{
			Sum += Counter;
		}
	}

	return Sum;
}

int SumOddNumbersFrom1toN_UsingDoWhile(int Number)
{
	int Counter = 0, Sum = 0;

	do
	{
		Counter++;
		
		if (CheckNumberType(Counter) == enOddEven::Odd)
		{
			Sum += Counter;
		}

	} while (Counter < Number);

	return Sum;
}

int SumOddNumbersFrom1toN_UsingFor(int Number)
{
	int Sum = 0;

	for (int Counter = 1; Counter <= Number; Counter++)
	{
		if (CheckNumberType(Counter) == enOddEven::Odd)
		{
			Sum += Counter;
		}
	}

	return Sum;
}

int main()
{
	int Number = ReadNumber("Please Enter a Number : ");

	cout << "\nSum Odd Numbers Using While Statment : " << SumOddNumbersFrom1toN_UsingWhile(Number) << endl;
	cout << "\nSum Odd Numbers Using Do While Statment : " << SumOddNumbersFrom1toN_UsingDoWhile(Number) << endl;
	cout << "\nSum Odd Numbers Using For Statment : " << SumOddNumbersFrom1toN_UsingFor(Number) << endl;

	return 0;
}