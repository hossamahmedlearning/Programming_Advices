#include <iostream>
using namespace std;

float ReadTotalSales()
{
	float TotalSales = 0;

	cout << "Please Enter Total Sales : ";
	cin >> TotalSales;

	return TotalSales;
}

float GetCommissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0;
}

float CalcTotalCommission(float TotalSales)
{
	return TotalSales * GetCommissionPercentage(TotalSales);
}

int main()
{
	float TotalSales = ReadTotalSales();

	cout << "\nCommission Percentage : " << GetCommissionPercentage(TotalSales) * 100 << "%" << endl;
	cout << "Total Commission : " << CalcTotalCommission(TotalSales) << endl;

	return 0;
}