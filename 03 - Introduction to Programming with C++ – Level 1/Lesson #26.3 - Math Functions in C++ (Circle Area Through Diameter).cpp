#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float diameter;

	cout << "Please enter diameter : ";
	cin >> diameter;

	cout << "\nCircle area : " << ceil((PI * pow(diameter, 2)) / 4) << endl;

	return 0;
}