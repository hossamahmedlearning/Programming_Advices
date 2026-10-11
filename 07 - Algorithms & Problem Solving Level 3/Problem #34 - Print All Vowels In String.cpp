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

bool IsVowel(char c)
{
    char arrVowelChar[5] = { 'a', 'e', 'i', 'o', 'u' };

    for (short i = 0; i < 5; i++)
    {
        if (arrVowelChar[i] == tolower(c))
            return true;
    }

    return false;
}

void PrintVowels(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        if (IsVowel(Str[i]))
            cout << Str[i] << "\t";
    }
}

int main()
{
    string Str = ReadString("Please Enter Your String : ");

    cout << "\nVowels in string ara : \n";
    PrintVowels(Str);
    cout << endl;

    return 0;
}