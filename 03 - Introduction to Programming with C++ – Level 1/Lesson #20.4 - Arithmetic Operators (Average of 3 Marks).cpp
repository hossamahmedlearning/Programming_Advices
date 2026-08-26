#include <iostream>
using namespace std;

int main()
{
	int mark1, mark2, mark3, sum;
	float avg;

	cout << "Please enter mark1 : ";
	cin >> mark1;

	cout << "Please enter mark2 : ";
	cin >> mark2;

	cout << "Please enter mark3 : ";
	cin >> mark3;

	sum = mark1 + mark2 + mark3;

	cout << "\nAverage = " << sum / 3 << endl;

	return 0;
}