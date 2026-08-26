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

void FillArrayWith1ToN(int arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        arr[i] = i + 1;
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

void ShuffleArray(int arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        Swap(arr[GetRandomNumber(0, arrLen - 1)], arr[GetRandomNumber(0, arrLen - 1)]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arrLen = 0;

    arrLen = ReadPositiveNumber("Please Enter Number Of Elements In Array : ");

    FillArrayWith1ToN(arr1, arrLen);

    cout << "\nArray Elements Before Shuffle : \n";
    PrintArray(arr1, arrLen);

    ShuffleArray(arr1, arrLen);

    cout << "\n\nArray Elements After Shuffle : \n";
    PrintArray(arr1, arrLen);

    cout << endl;

    return 0;
}