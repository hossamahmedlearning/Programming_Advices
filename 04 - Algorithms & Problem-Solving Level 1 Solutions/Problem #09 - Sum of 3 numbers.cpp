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

int CalcSumOf3Numbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}

void PrintResult(int Total)
{
	cout << "\nThe Total Sum Of Numbers Is : " << Total << endl;
}

int main()
{
	int Num1, Num2, Num3;

	ReadNumbers(Num1, Num2, Num3);

	PrintResult(CalcSumOf3Numbers(Num1, Num2, Num3));

	return 0;
}