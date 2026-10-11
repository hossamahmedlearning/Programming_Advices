#include <iostream>
#include <iomanip>
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
            cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

short CalcColSum(int arr[3][3], short Rows, short ColNumber)
{
    short ColSum = 0;

    for (short i = 0; i < Rows; i++)
    {
        ColSum += arr[i][ColNumber];
    }

    return ColSum;
}

void SumMatrixColsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (short j = 0; j < Cols; j++)
    {
        arrSum[j] = CalcColSum(arr, Rows, j);
    }
}

void PrintColsSumArray(int arrSum[3], short Cols)
{
    for (short j = 0; j < Cols; j++)
    {
        cout << " Col " << j + 1 << " Sum = " << arrSum[j] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3], arrSum[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "The following is a 3x3 random matrix : \n";
    PrintMatrix(arr, 3, 3);

    SumMatrixColsInArray(arr, arrSum, 3, 3);

    cout << "\nThe following are the sum of each col in the matrix : \n";
    PrintColsSumArray(arrSum, 3);

    return 0;
}