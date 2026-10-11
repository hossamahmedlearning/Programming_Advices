#include <iostream>
#include <vector>

using namespace std;

struct stEmployee
{
    string FirstName = "";
    string LastName = "";
    float Salary = 0;
};

int main()
{
    vector <stEmployee> vEmployees;
    stEmployee TempEmployee;

    TempEmployee.FirstName = "Hossam";
    TempEmployee.LastName = "Ahmed";
    TempEmployee.Salary = 5000;
    vEmployees.push_back(TempEmployee);

    TempEmployee.FirstName = "Ali";
    TempEmployee.LastName = "Maher";
    TempEmployee.Salary = 10000;
    vEmployees.push_back(TempEmployee);

    TempEmployee.FirstName = "Mohammed";
    TempEmployee.LastName = "Saeed";
    TempEmployee.Salary = 15000;
    vEmployees.push_back(TempEmployee);

    cout << "Employees Vector : \n\n";

    for (stEmployee& Employee : vEmployees)
    {
        //cout << "&Employee  : " << &Employee << endl;
        cout << "First Name : " << Employee.FirstName << endl;
        cout << "Last Name  : " << Employee.LastName << endl;
        cout << "Salary     : " << Employee.Salary << endl << endl;
    }

    cout << endl;

    return 0;
}