#include <iostream>
using namespace std;

string ReadPassword()
{
    string Password;

    cout << "Please Enter 3 Letters Password (All Capital) : ";
    cin >> Password;

    return Password;
}

bool GuessPassword(string OriginalPassword)
{
    string Word = "";
    int Counter = 0;

    cout << endl;

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                Counter++;

                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);

                cout << "Trial [" << Counter << "] : " << Word << endl;

                if (Word == OriginalPassword)
                {
                    cout << "\nPassword Is " << Word << endl;
                    cout << "Found After " << Counter << " Trial(s)" << endl;
                    return true;
                }

                Word = "";
            }
        }
    }

    return false;
}

int main()
{
    GuessPassword(ReadPassword());

    return 0;
}