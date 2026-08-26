#include <iostream>
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

void ReadArray(int arr[100], int& arrLen)
{
    arrLen = ReadPositiveNumber("Please Enter Number Of Elements In Array : ");

    cout << "\nEnter Array Elements : \n";

    for (int i = 0; i < arrLen; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
}

int NumberTimesRepeated(int Number, int arr[100], int arrLen)
{
    int Counter = 0;

    for (int i = 0; i < arrLen; i++)
    {
        if (Number == arr[i])
            Counter++;
    }

    return Counter;
}

void PrintArray(int arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int arr1[100], arr1Len = 0, NumberToCheck = 0;

    ReadArray(arr1, arr1Len);

    NumberToCheck = ReadPositiveNumber("\nPlease Enter Number You Want To Check : ");

    cout << "\nOriginal Array : ";
    PrintArray(arr1, arr1Len);

    cout << "\nNumber " << NumberToCheck << " Is Repeated " << NumberTimesRepeated(NumberToCheck, arr1, arr1Len) <<
        " Time(s)." << endl;

    return 0;
}