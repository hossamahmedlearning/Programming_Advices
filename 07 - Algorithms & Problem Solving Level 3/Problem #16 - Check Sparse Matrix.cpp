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

short CountNumberInMatrix(int arr[3][3], int NumberToCount, short Rows, short Cols)
{
    short Counter = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == NumberToCount)
                Counter++;
        }
    }

    return Counter;
}

bool IsSparceMatrix(int arr[3][3], short Rows, short Cols)
{
    return CountNumberInMatrix(arr, 0, Rows, Cols) >= (Rows * Cols / 2);
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSaprce[3][3] = {
        {0, 0, 12},
        {0, 0, 1},
        {0, 0, 9}
    };

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "Matrix 1 : \n";
    PrintMatrix(arrSaprce, 3, 3);

    if (IsSparceMatrix(arrSaprce, 3, 3))
        cout << "\nYes, it is sparse.\n";
    else
        cout << "\nNo, it is not sparse.\n";

    return 0;
}