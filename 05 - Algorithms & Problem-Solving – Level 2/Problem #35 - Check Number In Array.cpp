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

int FindNumberIndexInArray(int Number, int arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] == Number)
            return i;
    }

    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLen)
{
    return FindNumberIndexInArray(Number, arr, arrLen) != -1;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLen = 0, NumberToSearch = 0;

    arrLen = ReadPositiveNumber("Please Enter Number Of Elements In Array : ");

    FillArrayWithRandomNumbers(arr, arrLen);

    cout << "\nArray 1 Elements : \n";
    PrintArray(arr, arrLen);

    NumberToSearch = ReadPositiveNumber("\n\nPlease Enter a Number To Search : ");

    cout << "\nNumber You Are Looking For Is : " << NumberToSearch << endl;

    if (IsNumberInArray(NumberToSearch, arr, arrLen))
        cout << "Yes, The Number Is Found :-)" << endl;
    else
        cout << "No, The Number Is Not Found :-(" << endl;

    return 0;
}