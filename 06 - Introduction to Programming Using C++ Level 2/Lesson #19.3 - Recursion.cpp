#include <iostream>
using namespace std;

void PrintNumbersFromMtoN(int M, int N)
{
    if (M <= N)
    {
        cout << M << endl;
        PrintNumbersFromMtoN(M + 1, N);
    }
}

void PrintNumbersFromNToM(int N, int M)
{
    if (N >= M)
    {
        cout << N << endl;
        PrintNumbersFromNToM(N - 1, M);
    }
}

int CalcPower(int Number, int Power)
{
    if (Power == 0)
        return 1;

    return CalcPower(Number, Power - 1) * Number;
}

// chat gpt questions
void PrintNumbersFrom1ToN(int N, int Counter = 1)
{
    if (Counter > N)
        return;

    cout << Counter << endl;
    PrintNumbersFrom1ToN(N, Counter + 1);
}

void PrintNumbersFromNTo1(int N)
{
    if (N < 1)
        return;

    cout << N << endl;
    PrintNumbersFromNTo1(N - 1);
}

int CalcSumFrom1ToN(int N, int Counter = 1)
{
    if (Counter > N)
        return 0;

    return CalcSumFrom1ToN(N, Counter + 1) + Counter;
}

int CalcFactorial(int Number)
{
    if (Number == 1)
        return 1;

    return CalcFactorial(Number - 1) * Number;
}

short CountDigit(int Number)
{
    if (Number == 0)
        return 0;

    return CountDigit(Number / 10) + 1;
}

short SumDigits(int Number)
{
    if (Number == 0)
        return 0;

    return SumDigits(Number / 10) + (Number % 10);
}

int ReverseNumber(int Number, int RNumber = 0)
{
    if (Number == 0)
        return RNumber;

    RNumber = RNumber * 10 + (Number % 10);

    return ReverseNumber(Number / 10, RNumber);
}

bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}

int main()
{
    cout << IsPalindromeNumber(1221) << endl;

    return 0;
}