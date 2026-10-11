#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid Number, Please Enter a Valid One : ";
        cin >> Number;
    }

    return Number;
}

int main()
{
    int Number = ReadNumber("Please Enter Your Number : ");
    cout << "\nYour Number Is : " << Number << endl;

    return 0;
}