#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int GetRandomNumber(short From, short To)
{
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = GetRandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf("%0*d\t", 2, arr[i][j]);
        }
        cout << endl;
    }
}

bool IsPalindromeMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] != arr[i][Cols - j - 1])
                return false;
        }
    }

    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrPalindrome[3][3] = {
        {1, 2, 1},
        {5, 5, 5},
        {7, 3, 7}
    };

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "Matrix 1 : \n";
    PrintMatrix(arrPalindrome, 3, 3);

    if (IsPalindromeMatrix(arrPalindrome, 3, 3))
        cout << "\nYes, Matrix is palindrome.\n";
    else
        cout << "\nNo, Matrix is not palindrome.\n";

    return 0;
}