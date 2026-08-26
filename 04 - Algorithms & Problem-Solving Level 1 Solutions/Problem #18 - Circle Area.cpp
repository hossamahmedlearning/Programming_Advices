#include <iostream>
#include <cmath>
using namespace std;

float ReadRadius()
{
	float R;

	cout << "Please Enter Radius : ";
	cin >> R;

	return R;
}

float CalculateCircleArea(float R)
{
	float PI = 3.141592653589793238;

	return pow(R, 2) * PI;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area : " << Area << endl;
}

int main()
{
	PrintResult(CalculateCircleArea(ReadRadius()));

	return 0;
}