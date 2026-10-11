#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString(string Message)
{
    string Str;
    cout << Message;
    getline(cin, Str);
    return Str;
}

vector <string> SplitString(string Str, string Delim)
{
    vector <string> vTokens;

    string Word = "";
    short Pos = 0;

    while ((Pos = Str.find(Delim)) != std::string::npos)
    {
        Word = Str.substr(0, Pos);

        if (Word != "")
            vTokens.push_back(Word);

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

string JoinString(string arrTokens[100], short Len, string Delim)
{
    string Record = "";

    for (short i = 0; i < Len; i++)
    {
        Record += arrTokens[i] + Delim;
    }
    
    return Record.substr(0, Record.length() - Delim.length());
}

string ReverseWordsInString(string Str)
{
    string ReversedString = "";
    vector <string> vTokens = SplitString(Str, " ");

    vector <string>::iterator iter = vTokens.end();

    while (iter != vTokens.begin())
    {
        iter--;
        ReversedString += *iter + " ";
    }

    return ReversedString.substr(0, ReversedString.length() - 1);
}

int main()
{
    string Str = ReadString("Please Enter Your String : ");
    vector <string> vTokens = SplitString(Str, " ");

    cout << "\nString after reversing words : \n";
    cout << ReverseWordsInString(Str) << endl;

    return 0;
}