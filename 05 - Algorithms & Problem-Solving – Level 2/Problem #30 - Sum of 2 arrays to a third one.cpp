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

void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arrSum[100], arrLen = 0;

    arrLen = ReadPositiveNumber("Please Enter Number Of Elements In Array : ");

    FillArrayWithRandomNumbers(arr1, arrLen);
    FillArrayWithRandomNumbers(arr2, arrLen);

    SumOf2Arrays(arr1, arr2, arrSum, arrLen);

    cout << "\nArray 1 Elements : \n";
    PrintArray(arr1, arrLen);
   
    cout << "\n\nArray 2 Elements : \n";
    PrintArray(arr2, arrLen);

    cout << "\n\nSum Of Array1 And Array2 Elements : \n";
    PrintArray(arrSum, arrLen);

    cout << endl;

    return 0;
}