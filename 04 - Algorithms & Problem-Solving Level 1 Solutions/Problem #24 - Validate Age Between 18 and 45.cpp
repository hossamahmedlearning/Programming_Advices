#include <iostream>
using namespace std;

short ReadAge()
{
	short Age = 0;

	cout << "Please Enter Your Age : ";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Age, int From, int To)
{
	return (Age >= From && Age <= To);
}

void PrintResult(short Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << endl << Age << " Is Valid Age" << endl;
	else
		cout << endl << Age << " Is an Invalid Age" << endl;
}

int main()
{
	PrintResult(ReadAge());

	return 0;
}