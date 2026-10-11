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

int CountEachWordInString(string Str)
{
    int Counter = 0;

    string Delim = " ";
    short Pos = 0;
    string Word = "";

    while ((Pos = Str.find(Delim)) != std::string::npos)
    {
        Word = Str.substr(0, Pos);

        if (Word != "")
            Counter++;

        Str.erase(0, Pos + Delim.length());
    }

    if (Str != "")
        Counter++;

    return Counter;
}

int main()
{
    string Str = ReadString("Please Enter Your String : ");

    cout << "\nThe number of words in your string is : " << CountEachWordInString(Str) << endl;

    return 0;
}