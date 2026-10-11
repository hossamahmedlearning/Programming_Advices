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

bool IsScalarMatrix(int arr[3][3], short Rows, short Cols)
{
    short ScalarValue = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && arr[i][j] != ScalarValue)
            {
                return false;
            }
            else if (i != j && arr[i][j] != 0)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrScalar[3][3] = {
        {9, 0, 0},
        {0, 9, 0},
        {0, 0, 9}
    };

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "Matrix 1 : \n";
    PrintMatrix(arrScalar, 3, 3);

    if (IsScalarMatrix(arrScalar, 3, 3))
        cout << "\nYes : Matrix is Scalar.\n";
    else
        cout << "\nNo : Matrix is not Scalar.\n";

    return 0;
}