#include <iostream>
using namespace std;

// passing by val (another copy)
// passing by ref (edit on the original)
void MyFunction1(int &num1) 
{
	num1  = 10000;

	cout << "Number inside function became = " << num1 << endl;
}

int main()
{
	int num1;

	num1 = 1000;

	MyFunction1(num1);

	cout << "Number after calling the function became = " << num1 << endl;
	cout << "&num1 : " << &num1 << endl; // print memory address in hexadecimal

	return 0;
}