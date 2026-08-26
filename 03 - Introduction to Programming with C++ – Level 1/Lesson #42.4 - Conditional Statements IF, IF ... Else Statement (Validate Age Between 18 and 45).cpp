#include <iostream>
using namespace std;

bool isAgeBetween18And45(short age)
{
    if (age > 18 && age < 45)
        return true;
    else
        return false;
}

int main()
{
    short age;

    cout << "Please enter your age : ";
    cin >> age;

    if (isAgeBetween18And45(age))
    {
        cout << "\nValid Age." << endl;
    }
    else
    {
        cout << "\nInvalid Age." << endl;
    }

    return 0;
}