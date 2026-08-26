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

float MyABS(float Number)
{
    if (Number < 0)
        return Number * -1;
    else
        return Number;
}

int main()
{
    float Number = ReadNumber("Please Enter a Number : ");

    cout << "\nMy ABS Result : " << MyABS(Number);
    cout << "\nC++ ABS Result : " << abs(Number) << endl;

    return 0;
}