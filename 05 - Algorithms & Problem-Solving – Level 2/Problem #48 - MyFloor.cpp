#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
    float Number = 0;

    cout << Message;
    cin >> Number;

    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyFloor(float Number)
{
    if (abs(GetFractionPart(Number)) > 0)
        if (Number > 0)
            return int(Number);
        else
            return int(Number) - 1;
    else
        return int(Number);
}

int main()
{
    float Number = ReadNumber("Please Enter a Number : ");

    cout << "\nMy Floor Result : " << MyFloor(Number);
    cout << "\nC++ Floor Result : " << floor(Number) << endl;

    return 0;
}