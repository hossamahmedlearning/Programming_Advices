#include <iostream>

using namespace std;

int main()
{
    /*
    x[Rows][Cols]

            Col1        Col2        Col3        Col4
    Row1    x[0][0]     x[0][1]     x[0][2]     x[0][3]
    Row2    x[1][0]     x[1][1]     x[1][2]     x[1][3]
    Row3    x[2][0]     x[2][1]     x[2][2]     x[2][3]
    */

    // x[Rows][Cols]
    int x[3][4] =
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    for (int Rows = 0; Rows < 3; Rows++)
    {
        for (int Cols = 0; Cols < 4; Cols++)
        {
            printf("%0*d  ", 2, x[Rows][Cols]);
        }

        cout << endl;
    }

    return 0;
}