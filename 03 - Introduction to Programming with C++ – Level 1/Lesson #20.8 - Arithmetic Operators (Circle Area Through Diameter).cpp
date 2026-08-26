#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float diameter;

	cout << "Please enter diameter : ";
	cin >> diameter;

	cout << "\nCircle area : " << (PI * diameter * diameter) / 4 << endl;

	return 0;
}