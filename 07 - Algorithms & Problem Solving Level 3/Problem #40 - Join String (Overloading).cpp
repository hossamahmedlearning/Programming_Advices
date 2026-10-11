#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector <string> vTokens, string Delim)
{
    string Record = "";

    for (string& Token : vTokens)
    {
        Record += Token + Delim;
    }

    return Record.substr(0, Record.length() - Delim.length());
}

string JoinString(string arrTokens[100], short Len, string Delim)
{
    string Record = "";

    for (short i = 0; i < Len; i++)
    {
        Record += arrTokens[i] + Delim;
    }

    return Record.substr(0, Record.length() - Delim.length());
}

int main()
{
    vector <string> vTokens = { "Mohammed", "Fadi", "Ali", "Maher" };
    string arrTokens[] = { "Mohammed", "Fadi", "Ali", "Maher" };

    cout << "Vector after join : \n";
    cout << JoinString(vTokens, " ") << endl;

    cout << "\nArray after join : \n";
    cout << JoinString(arrTokens, 4, " ") << endl;

    return 0;
}