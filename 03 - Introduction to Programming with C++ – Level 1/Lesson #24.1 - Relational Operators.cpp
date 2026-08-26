#include <iostream>
using namespace std;

int main()
{
	int A, B;

	cout << "Please enter the first number A : ";
	cin >> A;

	cout << "Please enter the second number B : ";
	cin >> B;

	cout << endl;

	cout << A << " = " << B << " is " << (A == B) << endl;
	cout << A << " != " << B << " is " << (A != B) << endl;
	cout << A << " > " << B << " is " << (A > B) << endl;
	cout << A << " < " << B << " is " << (A < B) << endl;
	cout << A << " >= " << B << " is " << (A >= B) << endl;
	cout << A << " <= " << B << " is " << (A <= B) << endl;

	return 0;
}