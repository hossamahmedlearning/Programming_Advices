#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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

enPrimeNotPrime IsPrimeNumber(int Number)
{
	int HalfNumber = round(Number / 2);

	for (int Counter = 2; Counter <= HalfNumber; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
	cout << "\nPrime Numbers From " << 1 << " To " << Number << " Are : " << endl;

	for (int i = 1; i <= Number; i++)
	{
		if (IsPrimeNumber(i) == enPrimeNotPrime::Prime)
			cout << i << endl;
	}
}

int main()
{
	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please Enter Positive Number : "));

    return 0;
}