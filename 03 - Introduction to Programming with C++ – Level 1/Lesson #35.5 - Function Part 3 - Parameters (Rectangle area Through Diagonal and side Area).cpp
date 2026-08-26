#include <iostream>
#include <cmath>
using namespace std;

float calcRectangleArea(float side, float diagonal)
{
	return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}

int main()
{
	float side, diagonal;

	cout << "Please enter a side : ";
	cin >> side;

	cout << "Please enter a diagonal : ";
	cin >> diagonal;

	cout << "\nRectangle area through diagonal and side area of rectangle : " << calcRectangleArea(side, diagonal) << endl;

	return 0;
}