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

void CopyArray(int arrSource[100], int arrDestination[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        arrDestination[i] = arrSource[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arrLen = 0;

    FillArrayWithRandomNumbers(arr1, arrLen);

    CopyArray(arr1, arr2, arrLen);

    cout << "\nArray 1 Elements : ";
    PrintArray(arr1, arrLen);
   
    cout << "\n\nArray 2 Elements : ";
    PrintArray(arr2, arrLen);

    cout << endl;

    return 0;
}