#include <iostream>

using namespace std;

void PrintFibonacciUsingLoop(short Number)
{
    short Prev2 = 0;
    short Prev1 = 1;
    short FebNumber = 0;

    cout << "1\t";

    for (short i = 2; i <= Number; i++)
    {
        FebNumber = Prev1 + Prev2;
        cout << FebNumber << "\t";

        Prev2 = Prev1;
        Prev1 = FebNumber;
    }
}

int main()
{
    PrintFibonacciUsingLoop(10);

    return 0;
}