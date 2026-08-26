#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float& A, float& B)
{
	cout << "Please Enter Triangle Side : ";
	cin >> A;

	cout << "Please Enter Triangle Base : ";
	cin >> B;
}

float CalculateCircleAreaByITriangle(float A, float B)
{
	float PI = 3.141592653589793238;

	return PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
}

void PrintResult(float Area)
{
	cout << "\nCircle Area : " << Area << endl;
}

int main()
{
	float A, B;

	ReadTriangleData(A, B);

	PrintResult(CalculateCircleAreaByITriangle(A, B));

	return 0;
}