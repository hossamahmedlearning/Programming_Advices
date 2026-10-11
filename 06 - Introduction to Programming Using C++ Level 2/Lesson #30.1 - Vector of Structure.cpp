#include <iostream>
#include <vector>

using namespace std;

struct stEmployee
{
    string FristName = "";
    string LastName = "";
    float Salary = 0;
};

void ReadEmployees(vector <stEmployee>& vEmployees)
{
    char AddMore = 'y';
    stEmployee TempEmployee;

    while (tolower(AddMore) == 'y')
    {
        cout << "Please Enter Employee Info : " << endl;

        cout << "First Name : ";
        cin >> TempEmployee.FristName;

        cout << "Last Name : ";
        cin >> TempEmployee.LastName;

        cout << "Salary : ";
        cin >> TempEmployee.Salary;

        vEmployees.push_back(TempEmployee);

        cout << "\n\nDo You Want To Add More Employees (Y/N) ? ";
        cin >> AddMore;
    }
}

void PrintEmployees(vector <stEmployee>& vEmployees)
{
    cout << "\n\nEmployees Info : " << endl;

    for (stEmployee& Employee : vEmployees)
    {
        cout << "First Name : " << Employee.FristName << endl;
        cout << "Last Name  : " << Employee.LastName << endl;
        cout << "Salary     : " << Employee.Salary << endl << endl;
    }
}

int main()
{
    vector <stEmployee> vEmployees;

    ReadEmployees(vEmployees);
    PrintEmployees(vEmployees);

    return 0;
}