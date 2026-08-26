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

float CalcHalfNumber(int Number)
{
	return (float)Number / 2;
}

void PrintResult(int Number)
{
	string Result = "Half Of " + to_string(Number) + " Is : " + to_string(CalcHalfNumber(Number));
	cout << endl << Result << endl;
}

int main()
{
	PrintResult(ReadNumber("Please Enter a Number : "));

	return 0;
}