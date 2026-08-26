#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float squareSideLength;

	cout << "Please enter Square Side Length : ";
	cin >> squareSideLength;

	cout << "\nCircle area inscribed in a square : " << ceil((PI * pow(squareSideLength, 2)) / 4) << endl;

	return 0;
}