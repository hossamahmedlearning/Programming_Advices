#include <iostream>
using namespace std;

int main()
{
	float grades[3];

	cout << "Please enter grade1 : ";
	cin >> grades[0];

	cout << "Please enter grade2 : ";
	cin >> grades[1];

	cout << "Please enter grade3 : ";
	cin >> grades[2];

	cout << "\nThe average of grades is " << (grades[0] + grades[1] + grades[2]) / 3 << endl;

	return 0;
}