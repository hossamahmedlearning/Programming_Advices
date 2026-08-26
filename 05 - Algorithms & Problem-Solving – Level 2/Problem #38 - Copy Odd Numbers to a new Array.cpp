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

void AddArrayElement(int Element, int arr[100], int& arrLen)
{
    arr[arrLen] = Element;
    arrLen++;
}

void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrSourceLen, int& arrDestinationLen)
{
    for (int i = 0; i < arrSourceLen; i++)
    {
        if(arrSource[i] % 2 != 0)
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLen);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arr1Len = 0, arr2Len = 0;

    arr1Len = ReadPositiveNumber("Please Enter Number Of Elements : ");

    FillArrayWithRandomNumbers(arr1, arr1Len);

    CopyOddNumbers(arr1, arr2, arr1Len, arr2Len);

    //cout << "\nArray 1 Length : " << arr1Len;
    cout << "\nArray 1 Elements : \n";
    PrintArray(arr1, arr1Len);

    //cout << "\n\nArray 2 Length : " << arr2Len;
    cout << "\n\nArray 2 Odd Numbers : \n";
    PrintArray(arr2, arr2Len);

    cout << endl;

    return 0;
}