#include <iostream>
using namespace std;

int main()
{
	float billValue, totalBillValue;

	cout << "Please enter bill value : ";
	cin >> billValue;

	totalBillValue = billValue * 1.1;
	totalBillValue = totalBillValue * 1.16;

	cout << "\nTotal bill value : " << totalBillValue << endl;

	return 0;
}