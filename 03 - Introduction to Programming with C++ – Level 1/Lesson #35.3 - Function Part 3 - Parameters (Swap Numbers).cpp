#include <iostream>
using namespace std;

void swapNumbers(int num1, int num2)
{
	int temp;

	cout << "Number1 : " << num1 << endl;
	cout << "Number2 : " << num2 << endl;

	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "Number1 : " << num1 << endl;
	cout << "Number2 : " << num2 << endl;
}

int main()
{
	int num1, num2;

	cout << "Please enter number1 : ";
	cin >> num1;

	cout << "Please enter number2 : ";
	cin >> num2;

	swapNumbers(num1, num2);

	return 0;
}