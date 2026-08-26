#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float sides, base, circleArea;

	cout << "Please enter sides : ";
	cin >> sides;

	cout << "Please enter base : ";
	cin >> base;

	circleArea = PI * (base * base / 4) * ((2 * sides - base) / (2 * sides + base));

	cout << "\nCircle area Inscribed in an Isosceles Triangle : " << circleArea << endl;

	return 0;
}