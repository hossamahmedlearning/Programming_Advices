#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

void PowerOf2_3_4(int Number)
{
	cout << endl << Number << "^2 = " << Number * Number;
	cout << endl << Number << "^3 = " << Number * Number * Number;
	cout << endl << Number << "^4 = " << Number * Number * Number * Number << endl;
}

int main()
{
	PowerOf2_3_4(ReadNumber("Please Enter a Number : "));

	return 0;
}