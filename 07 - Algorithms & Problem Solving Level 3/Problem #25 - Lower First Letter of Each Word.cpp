#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString(string Message)
{
    string Str;
    cout << Message;
    getline(cin, Str);
    return Str;
}

string LowerFirstLetterOfEachWord(string Str)
{
    bool IsFirstLetter = true;

    for (int i = 0; i < Str.length(); i++)
    {
        if (IsFirstLetter && Str[i] != ' ')
            Str[i] = tolower(Str[i]);

        IsFirstLetter = (Str[i] == ' ' ? true : false);
    }

    return Str;
}

int main()
{
    string Str = ReadString("Please Enter Your String : ");
    Str = LowerFirstLetterOfEachWord(Str);

    cout << "\nString after conversion : \n";
    cout << Str << endl;

    return 0;
}