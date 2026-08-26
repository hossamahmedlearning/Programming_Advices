#include <iostream>
using namespace std;

void FillArrayWithFixedNumbers(int arr[100], int& arrLen)
{
    arrLen = 10;
    
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
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

void CopyDistinctElements(int arrSource[100], int arrDestination[100], int arrSourceLen, int& arrDestinationLen)
{
    for (int i = 0; i < arrSourceLen; i++)
    {
        if(!IsNumberInArray(arrSource[i], arrDestination, arrDestinationLen))
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLen);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arr1Len = 0, arr2Len = 0;

    FillArrayWithFixedNumbers(arr1, arr1Len);

    cout << "Array 1 Elements : \n";
    PrintArray(arr1, arr1Len);

    CopyDistinctElements(arr1, arr2, arr1Len, arr2Len);

    cout << "\n\nArray 2 Distinct Elements : \n";
    PrintArray(arr2, arr2Len);

    cout << endl;

    return 0;
}