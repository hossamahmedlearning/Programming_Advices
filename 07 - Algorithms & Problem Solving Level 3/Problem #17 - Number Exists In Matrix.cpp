#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

short ReadNumber(string Message)
{
    short Number;
    cout << Message;
    cin >> Number;
    return Number;
}

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

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    short Number = 0;

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);

    Number = ReadNumber("\nPlease enter the number to look for in matrix : ");

    // very slow solution
    if (CountNumberInMatrix(arr, Number, 3, 3))
        cout << "\nYes, it is there.\n";
    else
        cout << "\nNo, it is not there.\n";

    // normal solution
    if (IsNumberInMatrix(arr, Number, 3, 3))
        cout << "\nYes, it is there.\n";
    else
        cout << "\nNo, it is not there.\n";

    return 0;
}