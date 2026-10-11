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

int main()
{
    string Str = ReadString("Please Enter Your String : ");
    vector <string> vTokens = SplitString(Str, " ");

    cout << "\nTokens = " << vTokens.size() << endl;

    for (string& Token : vTokens)
        cout << Token << endl;

    return 0;
}