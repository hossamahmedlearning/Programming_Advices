#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float A, B, C, P;

	cout << "Please enter A : ";
	cin >> A;

	cout << "Please enter B : ";
	cin >> B;

	cout << "Please enter C : ";
	cin >> C;

	P = (A + B + C) / 2;

	float temp = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	float area = PI * pow(temp, 2);

	cout << "\ncircle area circle described around an arbitrary triangle : " << round(area) << endl;

	  

	return 0;
}