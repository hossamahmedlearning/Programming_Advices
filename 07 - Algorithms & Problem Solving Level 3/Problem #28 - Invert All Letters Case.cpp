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

char InvertLetterCase(char c)
{
    return isupper(c) ? tolower(c) : toupper(c);
}

string InvertAllStringLettersCase(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = InvertLetterCase(Str[i]);
    }

    return Str;
}

int main()
{
    string Str = ReadString("PLease Enter Your String : ");

    cout << "\nString after inverting all letters case : \n";
    Str = InvertAllStringLettersCase(Str);
    cout << Str << endl;

    return 0;
}