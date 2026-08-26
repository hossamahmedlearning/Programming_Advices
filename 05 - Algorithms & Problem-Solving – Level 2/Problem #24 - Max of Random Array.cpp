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

void FillArrayWithRandomNumbers(int arr[100], int& arrLen)
{
    arrLen = ReadPositiveNumber("Please Enter Number Of Elements In Array : ");

    for (int i = 0; i < arrLen; i++)
    {
        arr[i] = GetRandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << "  ";
    }
}

int GetMaxNumberInArray(int arr[100], int arrLen)
{
    int Max = arr[0];

    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] > Max)
            Max = arr[i];
    }

    return Max;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr1Len = 0;

    FillArrayWithRandomNumbers(arr1, arr1Len);

    cout << "\nArray Elements : ";
    PrintArray(arr1, arr1Len);
   
    cout << "\n\nMax Number Is : " << GetMaxNumberInArray(arr1, arr1Len) << endl;

    return 0;
}