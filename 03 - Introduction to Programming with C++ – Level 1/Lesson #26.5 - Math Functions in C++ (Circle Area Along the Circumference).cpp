#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float circumference;

	cout << "Please enter Square Side Length : ";
	cin >> circumference;

	cout << "\nCircle area inscribed in a square : " << floor(pow(circumference, 2) / (4 * PI)) << endl;

	return 0;
}