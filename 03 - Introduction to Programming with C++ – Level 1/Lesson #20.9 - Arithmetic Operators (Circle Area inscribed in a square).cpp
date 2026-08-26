#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float squareSideLength;

	cout << "Please enter square side length : ";
	cin >> squareSideLength;

	cout << "\nCircle area inscribed in a square : " << (PI * squareSideLength * squareSideLength) / 4 << endl;

	return 0;
}