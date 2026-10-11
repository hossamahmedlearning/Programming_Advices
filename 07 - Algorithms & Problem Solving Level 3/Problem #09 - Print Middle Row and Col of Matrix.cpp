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

void PrintMatrixMiddleRow(int arr[3][3], short Rows, short Cols)
{
    short MiddleRow = Rows / 2;

    for (short j = 0; j < Cols; j++)
    {
        printf("%0*d\t", 2, arr[MiddleRow][j]);
    }
}

void PrintMatrixMiddleCol(int arr[3][3], short Rows, short Cols)
{
    short MiddleCol = Cols / 2;

    for (short i = 0; i < Rows; i++)
    {
        printf("%0*d\t", 2, arr[i][MiddleCol]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);

    cout << "\nMiddel row of Matrix 1 is : \n";
    PrintMatrixMiddleRow(arr, 3, 3);

    cout << "\n\nMiddle Col of Matrix 1 is : \n";
    PrintMatrixMiddleCol(arr, 3, 3);

    cout << endl;

    return 0;
}