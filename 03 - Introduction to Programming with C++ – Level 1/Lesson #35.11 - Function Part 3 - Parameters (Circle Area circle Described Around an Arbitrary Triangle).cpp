#include <iostream>
#include <cmath>
using namespace std;

float calcCircleArea(float A, float B, float C)
{
	const float PI = 3.1415927;
	float P, temp, area;

	P = (A + B + C) / 2;

	temp = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	area = PI * pow(temp, 2);

	return area;
}

int main()
{
	float A, B, C, P;

	cout << "Please enter A : ";
	cin >> A;

	cout << "Please enter B : ";
	cin >> B;

	cout << "Please enter C : ";
	cin >> C;

	cout << "\ncircle area circle described around an arbitrary triangle : " << calcCircleArea(A, B, C) << endl;

	return 0;
}