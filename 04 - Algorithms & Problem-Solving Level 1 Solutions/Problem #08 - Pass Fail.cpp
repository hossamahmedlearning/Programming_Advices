#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

float ReadMark()
{
	float Mark = 0;

	cout << "Please Enter Your Mark : ";
	cin >> Mark;

	return Mark;
}

enPassFail CheckMark(float Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(float Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\nYou Passed" << endl;
	else
		cout << "\nYou Failed" << endl;
}

int main()
{
	PrintResult(ReadMark());

	return 0;
}