#include <iostream>
using namespace std;

void readGradesData(float grades[3])
{
	cout << "Please enter grade1 : ";
	cin >> grades[0];

	cout << "Please enter grade2 : ";
	cin >> grades[1];

	cout << "Please enter grade3 : ";
	cin >> grades[2];
}

float calcGradesAvg(float grades[3])
{
	return (grades[0] + grades[1] + grades[2]) / 3;
}

int main()
{
	float grades[3];

	readGradesData(grades);
	
	cout << "\nThe average of grades is " << calcGradesAvg(grades) << endl;

	return 0;
}