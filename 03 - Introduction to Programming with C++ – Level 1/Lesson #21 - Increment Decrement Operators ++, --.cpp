#include <iostream>
using namespace std;

int main()
{
	/*
	A++, ++A ==> if both on the same line both ara the same (A = A + 1)
	A--, --A ==> if both on the same line both ara the same (A = A - 1)
	*/

	int A = 10, B = 20;

	A++;
	B--;

	cout << "A = " << A << endl;
	cout << "B = " << B << endl << endl;

	++A;
	--B;

	cout << "A = " << A << endl;
	cout << "B = " << B << endl;

	return 0;
}