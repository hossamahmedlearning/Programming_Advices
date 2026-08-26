#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter()
{
	float D;

	cout << "Please Enter Diameter : ";
	cin >> D;

	return D;
}

float CalculateCircleAreaByDiameter(float D)
{
	float PI = 3.141592653589793238;

	return (pow(D, 2) * PI) / 4;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area : " << Area << endl;
}

int main()
{
	PrintResult(CalculateCircleAreaByDiameter(ReadDiameter()));

	return 0;
}