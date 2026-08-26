#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Please Enter Number1 : ";
	cin >> Num1;

	cout << "Please Enter Number2 : ";
	cin >> Num2;

	cout << "Please Enter Number3 : ";
	cin >> Num3;
}

int GetMaxOf3Numbers(int Num1, int Num2, int Num3)
{
	if (Num1 > Num2)
	{
		if (Num1 > Num3)
			return Num1;
		else
			return Num3;
	}
	else
	{
		if (Num2 > Num3)
			return Num2;
		else
			return Num3;
	}
}

void PrintResult(int MaxNumber)
{
	cout << "\nThe Maximum Number Is: " << MaxNumber << endl;
}

int main()
{
	int Num1, Num2, Num3;

	ReadNumbers(Num1, Num2, Num3);

	PrintResult(GetMaxOf3Numbers(Num1, Num2, Num3));

	return 0;
}