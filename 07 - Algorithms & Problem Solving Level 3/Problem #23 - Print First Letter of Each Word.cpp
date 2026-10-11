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

void PrintFirstLetterOfEachWord(string Str)
{
    bool IsFirstLetter = true;
    cout << "\nFirst letters of this string: \n";

    for (int i = 0; i < Str.length(); i++)
    {
        if (IsFirstLetter && Str[i] != ' ')
            cout << Str[i] << endl;

        IsFirstLetter = (Str[i] == ' ' ? true : false);
    }
}

int main()
{
    PrintFirstLetterOfEachWord(ReadString("Please Enter Your String : "));

    return 0;
}