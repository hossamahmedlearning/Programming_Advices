#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float side, base;

	cout << "Please enter side : ";
	cin >> side;

	cout << "Please enter base : ";
	cin >> base;

	cout << "\nCircle area Inscribed in an Isosceles Triangle : " 
		<< floor(PI * (pow(base, 2) / 4) * ((2 * side - base) / (2 * side + base))) << endl;

	return 0;
}