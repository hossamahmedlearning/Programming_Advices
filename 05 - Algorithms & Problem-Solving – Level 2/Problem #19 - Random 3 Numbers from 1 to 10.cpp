#include <iostream>
using namespace std;

int GetRandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomNumber(20, 50) << endl;
    cout << GetRandomNumber(20, 50) << endl;
    cout << GetRandomNumber(20, 50) << endl;

    return 0;
}