#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime IsPrimeNumber(int Number)
{
    int HalfNumber = round(Number / 2);

    for (int Counter = 2; Counter <= HalfNumber; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

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

void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrSourceLen, int& arrDestinationLen)
{
    arrDestinationLen = 0;

    for (int i = 0; i < arrSourceLen; i++)
    {
        if (IsPrimeNumber(arrSource[i]) == enPrimeNotPrime::Prime)
        {
            arrDestination[arrDestinationLen] = arrSource[i];
            arrDestinationLen++;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arr1Len = 0, arr2Len = 0;

    FillArrayWithRandomNumbers(arr1, arr1Len);

    CopyOnlyPrimeNumbers(arr1, arr2, arr1Len, arr2Len);

    cout << "\nArray 1 Elements : ";
    PrintArray(arr1, arr1Len);
   
    cout << "\n\nArray 2 Elements : ";
    PrintArray(arr2, arr2Len);

    cout << endl;

    return 0;
}