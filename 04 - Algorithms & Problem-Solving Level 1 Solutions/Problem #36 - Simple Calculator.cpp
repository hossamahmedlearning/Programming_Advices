#include <iostream>
using namespace std;

enum enOperations { Add = '+', Sub = '-', Mul = '*', Div = '/' };

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

enOperations ReadOp()
{
	char Op;

	cout << "Please Enter Operation Type (+, -, *, /) : ";
	cin >> Op;

	return (enOperations)Op;
}

float Calculator(float Number1, float Number2, enOperations Op)
{
	switch (Op)
	{
	case enOperations::Add:
		return Number1 + Number2;
		break;

	case enOperations::Sub:
		return Number1 - Number2;
		break;

	case enOperations::Mul:
		return Number1 * Number2;
		break;

	case enOperations::Div:
		return Number1 / Number2;
		break;

	default:
		return Number1 + Number2;
	}
}

int main()
{
	float Number1 = ReadNumber("Please Enter First Number : ");
	float Number2 = ReadNumber("Please Enter Second Number : ");
	enOperations Op = ReadOp();

	cout << "\nResult = " << Calculator(Number1, Number2, Op) << endl;

	return 0;
}