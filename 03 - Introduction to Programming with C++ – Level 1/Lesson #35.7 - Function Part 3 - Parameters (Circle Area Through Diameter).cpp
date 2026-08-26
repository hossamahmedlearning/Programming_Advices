#include <iostream>
#include <cmath>
using namespace std;

float calcCircleArea(float diameter)
{
	const float PI = 3.1415927;

	return (PI * pow(diameter, 2)) / 4;
}

int main()
{
	float diameter;

	cout << "Please enter diameter : ";
	cin >> diameter;

	cout << "\nCircle area : " << calcCircleArea(diameter) << endl;

	return 0;
}