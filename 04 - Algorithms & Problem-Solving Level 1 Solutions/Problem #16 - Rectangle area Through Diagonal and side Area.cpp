#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float& A, float& D)
{
	cout << "Please Enter Rectangle Side : ";
	cin >> A;

	cout << "Please Enter Rectangle Diagonal : ";
	cin >> D;
}

float CalculateRectangleArea(float A, float D)
{
	return A * sqrt(pow(D, 2) - pow(A, 2));
}

void PrintResult(float Area)
{
	cout << "\nRectange Area : " << Area << endl;
}

int main()
{
	float A, D;

	ReadNumbers(A, D);
	
	PrintResult(CalculateRectangleArea(A, D));

	return 0;
}