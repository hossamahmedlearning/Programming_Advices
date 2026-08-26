#include <iostream>
using namespace std;

float calcRectangleArea(float height, float base)
{
	return height * base;
}

int main()
{
	float height, base;

	cout << "Please enter height : ";
	cin >> height;

	cout << "Please enter base : ";
	cin >> base;

	cout << "\nRectangle Area = " << calcRectangleArea(height, base) << endl;

	return 0;
}