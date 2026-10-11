#include <iostream>

using namespace std;

int main()
{
    int x[10][10];

    // fill 2D array
    for (int Rows = 0; Rows < 10; Rows++)
    {
        for (int Cols = 0; Cols < 10; Cols++)
        {
            x[Rows][Cols] = (Rows + 1) * (Cols + 1);
        }
    }

    // print 2D array
    for (int Rows = 0; Rows < 10; Rows++)
    {
        for (int Cols = 0; Cols < 10; Cols++)
        {
            printf("%0*d ", 2, x[Rows][Cols]);
        }

        cout << endl;
    }

    return 0;
}