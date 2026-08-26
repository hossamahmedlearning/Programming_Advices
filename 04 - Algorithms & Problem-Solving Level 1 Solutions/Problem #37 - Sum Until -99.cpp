#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

int SumNumbersUntill_99()
{
	int Sum = 0;
	int Counter = 1;
	int Number = 0;

	Number = ReadNumber("Please Enter Number " + to_string(Counter) + " : ");

	while (Number != -99)
	{
		Sum += Number;

		Counter++;

		Number = ReadNumber("Please Enter Number " + to_string(Counter) + " : ");
	}

	return Sum;
}

int main()
{
	int Result = SumNumbersUntill_99();

	cout << "\nResult : " << Result << endl;

	return 0;
}