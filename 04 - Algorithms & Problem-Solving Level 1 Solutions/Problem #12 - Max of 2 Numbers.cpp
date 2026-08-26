#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please Enter Number1 : ";
	cin >> Num1;

	cout << "Please Enter Number2 : ";
	cin >> Num2;
}

int GetMaxOf2Numbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintResult(int MaxNumber)
{
	cout << "\nThe Maximum Number Is: " << MaxNumber << endl;
}

int main()
{
	int Num1, Num2;

	ReadNumbers(Num1, Num2);

	PrintResult(GetMaxOf2Numbers(Num1, Num2));

	return 0;
}