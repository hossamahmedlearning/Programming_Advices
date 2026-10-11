#include <iostream>

using namespace std;

int CalcPower(int N, int M)
{
    if (M == 0)
        return 1;

    return N * CalcPower(N, M - 1);
}

int main()
{
    cout << CalcPower(2, 4) << endl;
    return 0;
}