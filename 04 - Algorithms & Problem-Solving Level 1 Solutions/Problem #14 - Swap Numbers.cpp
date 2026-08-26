#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please Enter Number1 : ";
	cin >> Num1;

	cout << "Please Enter Number2 : ";
	cin >> Num2;
}

void Swap(int& Num1, int& Num2)
{
	int Temp = 0;

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void PrintNumbers(int Num1, int Num2)
{
	cout << "Number1 = " << Num1 << endl;
	cout << "Number2 = " << Num2 << endl;
}

int main()
{
	int Num1, Num2;

	ReadNumbers(Num1, Num2);

	cout << endl;
	PrintNumbers(Num1, Num2);

	Swap(Num1, Num2);

	cout << endl;
	cout << "After swapping :" << endl;
	PrintNumbers(Num1, Num2);

	return 0;
}