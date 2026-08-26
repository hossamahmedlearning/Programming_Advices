#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float& A, float& B, float& C)
{
	cout << "Please Enter Triangle Side : ";
	cin >> A;

	cout << "Please Enter Triangle Base : ";
	cin >> B;

	cout << "Please Enter Triangle Side : ";
	cin >> C;
}

float CalculateCircleAreaByATriangle(float A, float B, float C)
{
	float PI = 3.141592653589793238;

	float P = (A + B + C) / 2;

	float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

	float Area = PI * pow(T, 2);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area : " << Area << endl;
}

int main()
{
	float A, B, C;

	ReadTriangleData(A, B, C);

	PrintResult(CalculateCircleAreaByATriangle(A, B, C));

	return 0;
}