#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.1415927;
	float circumference;

	cout << "Please enter circumference : ";
	cin >> circumference;

	cout << "\nCircle area along the circumference : " << (circumference * circumference) / (4 * PI) << endl;

	return 0;
}