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

float MyRound(float Number)
{
    int IntPart = int(Number);

    float Fraction = GetFractionPart(Number);

    if (abs(Fraction) >= 0.5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
        return IntPart;
}

int main()
{
    float Number = ReadNumber("Please Enter a Number : ");

    cout << "\nMy Round Result : " << MyRound(Number);
    cout << "\nC++ Round Result : " << round(Number) << endl;

    return 0;
}