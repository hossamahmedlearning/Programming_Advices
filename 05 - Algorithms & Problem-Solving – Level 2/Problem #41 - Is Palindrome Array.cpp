#include <iostream>
using namespace std;

void FillArray(int arr[100], int& arrLen)
{
    arrLen = 6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

void PrintArray(int arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << "  ";
    }
}

bool IsPalindromeArray(int arr[100], int arrLen)
{
    for (int i = 0; i < arrLen / 2; i++)
    {
        if (arr[i] != arr[arrLen - 1 - i])
            return false;
    }

    return true;
}

int main()
{
    int arr[100], arrLen = 0;

    FillArray(arr, arrLen);

    cout << "\nArray Elements : \n";
    PrintArray(arr, arrLen);
    cout << endl;

    if (IsPalindromeArray(arr, arrLen))
        cout << "\nYes, Array Is Palindrome" << endl;
    else
        cout << "\nNo, Array Is Not Palindrome" << endl;

    return 0;
}