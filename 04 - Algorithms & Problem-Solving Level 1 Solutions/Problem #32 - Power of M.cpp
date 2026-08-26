#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

int PowerOfM(int Number, int M)
{
	int Result = 1;

	for (int Counter = 1; Counter <= M; Counter++)
	{
		Result *= Number;
	}

	return Result;
}

int main()
{
	int Number = ReadNumber("Please Enter a Number : ");
	int Power = ReadNumber("Please Enter a Power : ");

	cout << "\nResult : " << PowerOfM(Number, Power) << endl;

	return 0;
}