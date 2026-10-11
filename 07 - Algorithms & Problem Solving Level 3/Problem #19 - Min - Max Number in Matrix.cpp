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

short GetMaxNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
    short Max = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] > Max)
                Max = arr[i][j];
        }
    }

    return Max;
}

short GetMinNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
    short Min = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] < Min)
                Min = arr[i][j];
        }
    }

    return Min;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);

    cout << "\nMinimum Number is : " << GetMinNumberInMatrix(arr, 3, 3) << endl;
    cout << "\nMax Number is : " << GetMaxNumberInMatrix(arr, 3, 3) << endl;

    return 0;
}