#include <iostream>
using namespace std;

void ReadMarks(float& Mark1, float& Mark2, float& Mark3)
{
	cout << "Please Enter Mark1 : ";
	cin >> Mark1;

	cout << "Please Enter Mark2 : ";
	cin >> Mark2;

	cout << "Please Enter Mark3 : ";
	cin >> Mark3;
}

int CalcSumOf3Marks(float Mark1, float Mark2, float Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalcAvgOf3Marks(float Mark1, float Mark2, float Mark3)
{
	return (float)CalcSumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResult(float Avg)
{
	cout << "\nThe Average Is : " << Avg << endl;
}

int main()
{
	float Mark1, Mark2, Mark3;

	ReadMarks(Mark1, Mark2, Mark3);

	PrintResult(CalcAvgOf3Marks(Mark1, Mark2, Mark3));

	return 0;
}