#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float radius;

	cout << "Please enter radius : ";
	cin >> radius;

	cout << "\nCircle area : " << ceil(PI * pow(radius, 2)) << endl;

	return 0;
}