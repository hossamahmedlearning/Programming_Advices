#include <iostream>
using namespace std;

int x = 300; // global variable (accessable from all program)

void MyFunction1()
{
	int x = 500; // local variable

	cout << "The value of x inside function is: " << x << endl;
}

int main()
{
	int x = 10; // local variable

	cout << "The local value of x inside Main is: " << x << endl;
	MyFunction1();

	cout << "The golobal value of x I is: " << ::x << endl; // print global variable
	::x = 7000;
	cout << "The golobal value of x I is after edit: " << ::x << endl; // print global variable

	return 0;
}