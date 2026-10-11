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

bool IsNumberInMatrix(int arr[3][3], int Number, short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == Number)
                return true;
        }
    }

    return false;
}

void PrintIntersectedNumbers(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (IsNumberInMatrix(arr2, arr1[i][j], Rows, Cols))
                cout << arr1[i][j] << "\t";
        }
    }
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

    cout << "\nIntersected numbers ara : \n";
    PrintIntersectedNumbers(arr1, arr2, 3, 3);
    cout << endl;

    return 0;
}