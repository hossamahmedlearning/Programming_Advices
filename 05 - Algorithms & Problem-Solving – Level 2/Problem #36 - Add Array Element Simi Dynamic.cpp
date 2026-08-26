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

void InputUserNumbersInArray(int arr[100], int& arrLen)
{
    bool AddMore = false;

    do
    {
        AddArrayElement(ReadPositiveNumber("\nPlease Enter a Number : "), arr, arrLen);

        cout << "Do You Want To Add More Numbers ? [0]:No, [1],Yes : ";
        cin >> AddMore;

    } while (AddMore);
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLen = 0;

    InputUserNumbersInArray(arr, arrLen);

    cout << "\n\nArray Length : " << arrLen << endl;

    cout << "Array Elements : ";
    PrintArray(arr, arrLen);
    cout << endl;

    return 0;
}