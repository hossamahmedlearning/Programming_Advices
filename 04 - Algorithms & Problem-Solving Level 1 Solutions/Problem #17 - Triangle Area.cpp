#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float& A, float& H)
{
	cout << "Please Enter Triangle Base : ";
	cin >> A;

	cout << "Please Enter Triangle Height : ";
	cin >> H;
}

float CalcTriangleArea(float A, float H)
{
	return 0.5 * A * H;
}

void PrintResult(float Area)
{
	cout << "\nTriangle Area : " << Area << endl;
}

int main()
{
	float A, H;

	ReadNumbers(A, H);
	
	PrintResult(CalcTriangleArea(A, H));

	return 0;
}