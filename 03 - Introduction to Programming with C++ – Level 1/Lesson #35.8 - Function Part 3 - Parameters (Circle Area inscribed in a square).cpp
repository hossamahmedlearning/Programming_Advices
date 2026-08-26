#include <iostream>
#include <cmath>
using namespace std;

float calcCircleArea(float squareSideLength)
{
	const float PI = 3.1415927;

	return (PI * pow(squareSideLength, 2)) / 4;
}

int main()
{
	float squareSideLength;

	cout << "Please enter Square Side Length : ";
	cin >> squareSideLength;

	cout << "\nCircle area inscribed in a square : " << calcCircleArea(squareSideLength) << endl;

	return 0;
}