#include <iostream>
using namespace std;

// by default array passed by ref
void readArrayData(int x[3])
{
	cout << "Please enter number1 : ";
	cin >> x[0];

	cout << "Please enter number2 : ";
	cin >> x[1];

	cout << "Please enter number3 : ";
	cin >> x[2];
}

void printArrayData(int x[3])
{
	cout << "****************************\n";
	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << x[2] << endl;
}

int main()
{
	int x[3];
	readArrayData(x);
	printArrayData(x); 

	return 0;
}