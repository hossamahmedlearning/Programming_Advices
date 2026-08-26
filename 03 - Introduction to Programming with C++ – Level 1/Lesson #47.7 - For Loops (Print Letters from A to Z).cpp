#include <iostream>
using namespace std;

void printAllLetters()
{
    for (short i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
}

int main()
{
    printAllLetters();

    return 0;
}