#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    string city;
    string country;
    float monthlySalary;
    char gender;
    bool isMarried;

    cout << "Please enter your name : ";
    cin >> name;

    cout << "Please enter your age : ";
    cin >> age;

    cout << "Please enter your ciry : ";
    cin >> city;

    cout << "Please enter your country : ";
    cin >> country;

    cout << "Please enter your monthly salary : ";
    cin >> monthlySalary;

    cout << "Please enter your gender (M/F) : ";
    cin >> gender;

    cout << "Please enter married status [0]:No, [1]:Yes : ";
    cin >> isMarried;

    cout << endl << endl;

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