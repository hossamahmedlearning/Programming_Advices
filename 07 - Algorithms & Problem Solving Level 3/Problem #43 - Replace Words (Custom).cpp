#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector <string> SplitString(string Str, string Delim)
{
    vector <string> vTokens;

    string Token = "";
    short Pos = 0;

    while ((Pos = Str.find(Delim)) != std::string::npos)
    {
        Token = Str.substr(0, Pos);

        if (Token != "")
            vTokens.push_back(Token);

        Str.erase(0, Pos + Delim.length());
    }

    if (Str != "")
        vTokens.push_back(Str);

    return vTokens;
}

string JoinString(vector <string> vTokens, string Delim)
{
    string Record = "";

    for (string& Token : vTokens)
    {
        Record += Token + Delim;
    }

    return Record.substr(0, Record.length() - Delim.length());
}

string LowerAllString(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = tolower(Str[i]);
    }

    return Str;
}

string ReplaceWordInString(string Str, string OldWord, string NewWord, bool MatchCase = true)
{
    vector <string> vTokens = SplitString(Str, " ");

    for (string& Token : vTokens)
    {
        if (MatchCase)
        {
            if (Token == OldWord)
                Token = NewWord;
        }
        else
        {
            if (LowerAllString(Token) == LowerAllString(OldWord))
                Token = NewWord;
        }
    }

    return JoinString(vTokens, " ");
}

int main()
{
    string Str = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "jordan";
    string ReplaceTo = "USA";

    cout << "\nOriginal String : \n";
    cout << Str << endl;

    cout << "\nReplace with match case : \n";
    cout << ReplaceWordInString(Str, StringToReplace, ReplaceTo) << endl;

    cout << "\nReplace with don't match case : \n";
    cout << ReplaceWordInString(Str, StringToReplace, ReplaceTo, false) << endl;

    return 0;
}