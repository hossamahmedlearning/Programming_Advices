#include <iostream>
using namespace std;

bool checkPinCode(string password)
{
    if (password == "1234")
        return true;
    else
        return false;
}

int main()
{
    string password;

    cout << "Please enter password : ";
    cin >> password;

    if (checkPinCode(password))
        cout << "\nYour Balance is : 7500\n";
    else
        cout << "\nWrong PIN\n";


    return 0;
}