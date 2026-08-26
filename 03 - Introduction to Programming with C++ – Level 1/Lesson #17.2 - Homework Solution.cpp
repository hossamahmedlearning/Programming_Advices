#include <iostream>
using namespace std;

int main()
{
    string name = "Hossam Ahmed";
    int age = 22;
    string city = "Cairo";
    string country = "Egypt";
    float monthlySalary = 5000;
    char gender = 'M';
    bool isMarried = true;

    cout << "*********************************\n";
    cout << "Name           : " << name << endl;
    cout << "Age            : " << age << endl;
    cout << "City           : " << city << endl;
    cout << "Country        : " << country << endl;
    cout << "Monthly Salary : " << monthlySalary << endl;
    cout << "Yearly Salary  : " << monthlySalary * 12 << endl;
    cout << "Gender         : " << gender << endl;
    cout << "Married        : " << isMarried << endl;
    cout << "*********************************\n";

    return 0;
}