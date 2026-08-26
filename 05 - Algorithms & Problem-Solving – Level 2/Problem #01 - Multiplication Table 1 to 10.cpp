#include <iostream>
using namespace std;

void PrintTableHeader()
{
    cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n";

    for (short i = 1; i <= 10; i++)
    {
        cout << "\t" << i;
    }

    cout << "\n______________________________________________________________________________________\n";
}

string ColumnSeparator(short Number)
{
    if (Number < 10)
       return "   |";
    else
        return "  |";
}

void PrintMultiplicationTable()
{
    PrintTableHeader();

    for (short i = 1; i <= 10; i++)
    {
        cout << " " << i << ColumnSeparator(i);

        for (short j = 1; j <= 10; j++)
        {
            cout << "\t" << i * j;
        }

        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();

    return 0;
}