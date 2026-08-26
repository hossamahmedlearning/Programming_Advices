#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float side, diagonal;

	cout << "Please enter a side : ";
	cin >> side;

	cout << "Please enter a diagonal : ";
	cin >> diagonal;

	cout << "\nRectangle area through diagonal and side area of rectangle : " << side * sqrt(pow(diagonal, 2) - pow(side, 2)) << endl;

	return 0;
}