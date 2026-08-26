#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

int GetRandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        arr[i] = GetRandomNumber(-100, 100);
    }
}

void PrintArray(int arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << "  ";
    }
}

int CountPositiveNumbers(int arr[100], int arrLen)
{
    int Counter = 0;

    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] >= 0)
            Counter++;
    }

    return Counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLen = 0;

    arrLen = ReadPositiveNumber("Please Enter Number Of Elements : ");

    FillArrayWithRandomNumbers(arr, arrLen);

    cout << "\nArray Elements : ";
    PrintArray(arr, arrLen);

    cout << "\n\nPositive Numbers Count Is : " << CountPositiveNumbers(arr, arrLen) << endl;

    return 0;
}