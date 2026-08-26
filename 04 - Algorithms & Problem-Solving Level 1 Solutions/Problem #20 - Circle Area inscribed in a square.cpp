#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide()
{
	float A;

	cout << "Please Enter Diameter : ";
	cin >> A;

	return A;
}

float CalculateCircleAreaInscribedInSquare(float A)
{
	float PI = 3.141592653589793238;

	return (pow(A, 2) * PI) / 4;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area : " << Area << endl;
}

int main()
{
	PrintResult(CalculateCircleAreaInscribedInSquare(ReadSquareSide()));

	return 0;
}