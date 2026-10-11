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

short CalcRowSum(int arr[3][3], short RowNumber, short Cols)
{
    short RowSum = 0;

    for (short j = 0; j < Cols; j++)
    {
        RowSum += arr[RowNumber][j];
    }

    return RowSum;
}

void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        arrSum[i] = CalcRowSum(arr, i, Cols);
    }
}

void PrintRowsSumArray(int arrSum[3], short Rows)
{
    for (short i = 0; i < Rows; i++)
    {
        cout << " Row " << i + 1 << " Sum = " << arrSum[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3], arrSum[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "The following is a 3x3 random matrix : \n";
    PrintMatrix(arr, 3, 3);

    SumMatrixRowsInArray(arr, arrSum, 3, 3);

    cout << "\nThe following are the sum of each row in the matrix : \n";
    PrintRowsSumArray(arrSum, 3);

    return 0;
}