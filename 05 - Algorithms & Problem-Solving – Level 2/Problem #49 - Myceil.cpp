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

int MyCeil(float Number)
{
    if (abs(GetFractionPart(Number) > 0))
        if (Number > 0)
            return int(Number) + 1;
        else
            return int(Number);
    else
        return Number;
}

int main()
{
    float Number = ReadNumber("Please Enter a Number : ");

    cout << "\nMy Ceil Result : " << MyCeil(Number);
    cout << "\nC++ Ceil Result : " << ceil(Number) << endl;

    return 0;
}