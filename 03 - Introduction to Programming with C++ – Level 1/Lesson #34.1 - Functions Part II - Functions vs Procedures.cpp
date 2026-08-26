#include <iostream>
using namespace std;

void mySumProcedure()
{
	int num1, num2;

	cout << "Please enter number1 : \n";
	cin >> num1;

	cout << endl;

	cout << "Please enter number2 : \n";
	cin >> num2;

	cout << "********************************\n";
	cout << num1 + num2;
}

int mySumFunction()
{
	int num1, num2;

	cout << "Please enter number1 : \n";
	cin >> num1;

	cout << endl;

	cout << "Please enter number2 : \n";
	cin >> num2;

	cout << "********************************\n";
	return num1 + num2;
}

int main()
{
	mySumProcedure();
	cout << endl << endl << endl;
	cout << mySumFunction() << endl;

	return 0;
}