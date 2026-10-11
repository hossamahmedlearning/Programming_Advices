#include <iostream>

using namespace std;

struct stEmployee
{
    string Name = "";
    float Salary = 0;
};

int main()
{
    stEmployee Employee, * ptr;

    Employee.Name = "Hossam Ahmed";
    Employee.Salary = 100000;

    cout << "Print Info Using Noraml Structure : " << endl;
    cout << "Name   : " << Employee.Name << endl;
    cout << "Salary : " << Employee.Salary << endl;

    ptr = &Employee;

    cout << "\n\nPrint Info Using Pointer : " << endl;
    cout << "Name   : " << ptr->Name << endl;
    cout << "Salary : " << ptr->Salary << endl;

    return 0;
}