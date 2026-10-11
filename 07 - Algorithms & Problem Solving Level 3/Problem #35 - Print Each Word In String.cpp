#include <iostream>
#include <string>

using namespace std;

string ReadString(string Message)
{
    string Str;
    cout << Message;
    getline(cin, Str);
    return Str;
}

void PrintEachWordInString(string Str)
{
    string Delim = " ";
    short Pos = 0;
    string Word = "";

    while ((Pos = Str.find(Delim)) != std::string::npos)
    {
        Word = Str.substr(0, Pos);

        if (Word != "")
            cout << Word << endl;

        Str.erase(0, Pos + Delim.length());
    }

    if (Str != "")
        cout << Str << endl;
}

int main()
{
    string Str = ReadString("Please Enter Your String : ");

    cout << "\nYour string words are : \n";
    PrintEachWordInString(Str);

    return 0;
}