#include <iostream>
#include <cmath>
using namespace std;

float ReadCircumference()
{
	float L;

	cout << "Please Enter Circumference : ";
	cin >> L;

	return L;
}

float CalculateCircleAreaByCircumference(float L)
{
	float PI = 3.141592653589793238;

	return pow(L, 2) / (4 * PI);
}

void PrintResult(float Area)
{
	cout << "\nCircle Area : " << Area << endl;
}

int main()
{
	PrintResult(CalculateCircleAreaByCircumference(ReadCircumference()));

	return 0;
}