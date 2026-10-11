#include <iostream>

using namespace std;

void PrintFibonacciUsingRecursion(short Number, short Prev1, short Prev2)
{
    short FebNumber = 0;

    if (Number > 0)
    {
        FebNumber = Prev1 + Prev2;
        cout << FebNumber << "\t";
        Prev2 = Prev1;
        Prev1 = FebNumber;

        PrintFibonacciUsingRecursion(Number - 1, Prev1, Prev2);
    }
}

int main()
{
    PrintFibonacciUsingRecursion(10, 0, 1);

    return 0;
}