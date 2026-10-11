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
            arr[i][j] = GetRandomNumber(1, 10);
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

short CalcMatrixSum(int arr[3][3], short Rows, short Cols)
{
    short Sum = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }
    }

    return Sum;
}

bool AreEqualMatrices(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
    return CalcMatrixSum(arr1, Rows, Cols) == CalcMatrixSum(arr2, Rows, Cols);
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);

    cout << "Matrix 1 : \n";
    PrintMatrix(arr1, 3, 3);

    cout << "\nMatrix 2 : \n";
    PrintMatrix(arr2, 3, 3);

    if (AreEqualMatrices(arr1, arr2, 3, 3))
        cout << "\nYes : Matrix is equal.\n";
    else
        cout << "\nNo : Matrix is not equal.\n";

    return 0;
}