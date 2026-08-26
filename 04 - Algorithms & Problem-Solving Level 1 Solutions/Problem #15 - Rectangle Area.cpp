#include <iostream>
using namespace std;

void ReadNumbers(float& A, float& B)
{
	cout << "Please Enter Rectangle Width : ";
	cin >> A;

	cout << "Please Enter Rectangle Length : ";
	cin >> B;
}

float CalculateRectangleArea(float A, float B)
{
	return A * B;
}

void PrintResult(float Area)
{
	cout << "\nRectange Area : " << Area << endl;
}

int main()
{
	float A, B;

	ReadNumbers(A, B);
	
	PrintResult(CalculateRectangleArea(A, B));

	return 0;
}