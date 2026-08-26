#include <iostream>
using namespace std;

int ReadNumberInRange(int From, int To)
{
	int Number = 0;

	do
	{
		cout << "Please Enter Grade Between " << From << " and " << To << " : ";
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

void PrintGradeLetter(char GradeLetter)
{
	cout << "\nGrade Letter : " << GradeLetter << endl;
}

int main()
{
	PrintGradeLetter(GetGradeLetter(ReadNumberInRange(0, 100)));

	return 0;
}