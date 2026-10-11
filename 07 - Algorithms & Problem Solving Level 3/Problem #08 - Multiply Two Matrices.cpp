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

void MultiplyMatrix(int arr1[3][3], int arr2[3][3], int arrResult[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrResult[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3], arrResult[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);

    MultiplyMatrix(arr1, arr2, arrResult, 3, 3);

    cout << "Matrix 1 : \n";
    PrintMatrix(arr1, 3, 3);

    cout << "\nMatrix 1 : \n";
    PrintMatrix(arr2, 3, 3);

    cout << "\nResult : \n";
    PrintMatrix(arrResult, 3, 3);

    return 0;
}