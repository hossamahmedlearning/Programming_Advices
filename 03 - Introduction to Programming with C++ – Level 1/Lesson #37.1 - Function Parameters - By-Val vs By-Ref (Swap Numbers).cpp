#include <iostream>
using namespace std;

void swap(int& num1, int& num2)
{
	int temp;

	temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	int num1, num2;

	cout << "Please enter number1 : ";
	cin >> num1;

	cout << "Please enter number2 : ";
	cin >> num2;

	cout << "\nNumber1 : " << num1 << endl;
	cout << "Number2 : " << num2 << endl;

	swap(num1, num2);

	cout << "\nNumber1 after swap : " << num1 << endl;
	cout << "Number2 after swap : " << num2 << endl;

	return 0;
}