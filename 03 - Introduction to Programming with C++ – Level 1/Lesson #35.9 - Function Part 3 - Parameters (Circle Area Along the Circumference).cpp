#include <iostream>
#include <cmath>
using namespace std;

float calcCircleArea(float circumference)
{
	const float PI = 3.1415927;

	return pow(circumference, 2) / (4 * PI);
}

int main()
{
	float circumference;

	cout << "Please enter Square Side Length : ";
	cin >> circumference;

	cout << "\nCircle area inscribed in a square : " << calcCircleArea(circumference) << endl;

	return 0;
}