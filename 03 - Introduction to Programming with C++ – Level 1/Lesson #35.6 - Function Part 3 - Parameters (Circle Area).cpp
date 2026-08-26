#include <iostream>
using namespace std;

float calcCircleArea(float radius)
{
	const float PI = 3.1415927;

	return PI * pow(radius, 2);
}

int main()
{
	float radius;

	cout << "Please enter radius : ";
	cin >> radius;

	cout << "\nCircle area : " << calcCircleArea(radius) << endl;

	return 0;
}