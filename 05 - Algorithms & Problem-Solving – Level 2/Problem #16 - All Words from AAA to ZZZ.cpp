#include <iostream>
using namespace std;

void PrintAllWordsFromAAAToZZZ()
{
    string word = "";

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                cout << word << endl;

                word = "";
            }

            cout << "\n______________________________\n";
        }
    }
}

int main()
{
    PrintAllWordsFromAAAToZZZ();

    return 0;
}