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

void Swap(int& Num1, int& Num2)
{
    int Temp = 0;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        arrDestination[i] = arrSource[arrLen - 1 - i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arrLen = 0;

    arrLen = ReadPositiveNumber("Please Enter Number Of Elements In Array : ");

    FillArrayWithRandomNumbers(arr1, arrLen);

    CopyArrayInReverseOrder(arr1, arr2, arrLen);

    cout << "\nArray 1 Elements : \n";
    PrintArray(arr1, arrLen);

    cout << "\n\nArray 2 Elements After Copying Array 1 In Reversed Order : \n";
    PrintArray(arr2, arrLen);

    cout << endl;

    return 0;
}