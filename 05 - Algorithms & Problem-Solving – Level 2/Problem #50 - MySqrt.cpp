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

int MySqrt(float Number)
{
    return pow(Number, 0.5);
}

int main()
{
    float Number = ReadNumber("Please Enter a Number : ");

    cout << "\nMy Sqrt Result : " << MySqrt(Number);
    cout << "\nC++ Sqrt Result : " << sqrt(Number) << endl;

    return 0;
}