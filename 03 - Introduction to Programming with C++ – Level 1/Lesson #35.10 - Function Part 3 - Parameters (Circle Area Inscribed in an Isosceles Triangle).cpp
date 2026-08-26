#include <iostream>
#include <cmath>
using namespace std;

float calcCircleArea(float side, float base)
{
	const float PI = 3.1415927;

	return PI * (pow(base, 2) / 4) * ((2 * side - base) / (2 * side + base));
}

int main()
{
	float side, base;

	cout << "Please enter side : ";
	cin >> side;

	cout << "Please enter base : ";
	cin >> base;

	cout << "\nCircle area Inscribed in an Isosceles Triangle : "
		<< calcCircleArea(side, base) << endl;

	return 0;
}