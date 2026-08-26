#include <iostream>
using namespace std;

int main()
{
	int num1, num2, temp;

	cout << "Please enter num1 : ";
	cin >> num1;

	cout << "Please enter num2 : ";
	cin >> num2;

	cout << "\nNumber1 : " << num1 << endl;
	cout << "Number2 : " << num2 << endl;

	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "\nNumber1 after swap : " << num1 << endl;
	cout << "Number2 after swap : " << num2 << endl;

	return 0;
}