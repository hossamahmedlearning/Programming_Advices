#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}


enPrimeNotPrime IsPrimeNumber(int Number)
{
	if (Number < 2)
		return enPrimeNotPrime::NotPrime;

	int HalfNumber = round(Number / 2);

	for (int Counter = 2; Counter <= HalfNumber; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;
}

void PrintResult(int Number)
{
	switch (IsPrimeNumber(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "\nThe Number Is Prime" << endl;
		break;

	case enPrimeNotPrime::NotPrime:
		cout << "\nThe Number Is Not Prime" << endl;
		break;
	}	
}

int main()
{
	PrintResult(ReadPositiveNumber("Please Enter a Positive Number : "));

	return 0;
}