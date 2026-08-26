#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

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

enPassFail CheckAvg(float Avg)
{
	if (Avg >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(float Avg)
{
	cout << "\nYour Average Is : " << Avg << endl;

	if (CheckAvg(Avg) == enPassFail::Pass)
		cout << "\nYou Passed" << endl;
	else
		cout << "\nYou Failed" << endl;

}

int main()
{
	float Mark1, Mark2, Mark3;

	ReadMarks(Mark1, Mark2, Mark3);

	PrintResult(CalcAvgOf3Marks(Mark1, Mark2, Mark3));

	return 0;
}