#include <iostream>
using namespace std;

float calcPercentage(float totalSales)
{
    if (totalSales > 1000000)
        return 0.01;
    else if (totalSales > 500000)
        return 0.02;
    else if (totalSales > 100000)
        return 0.03;
    else if (totalSales > 50000)
        return 0.05;
    else
        return 0;
}

float calcCommission(float totalSales)
{
    return totalSales * calcPercentage(totalSales);
}

int main()
{
    float totalSales;

    cout << "Please enter total sales : ";
    cin >> totalSales;

    cout << "\nCommission : " << calcCommission(totalSales) << endl;

    return 0;
}