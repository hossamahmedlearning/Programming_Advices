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

int main()
{
    vector <string> vTokens = { "Mohammed", "Fadi", "Ali", "Maher" };

    cout << "Vector after join : \n";
    cout << JoinString(vTokens, " ") << endl;

    return 0;
}