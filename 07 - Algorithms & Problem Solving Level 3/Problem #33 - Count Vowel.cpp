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

int CountVowels(string Str)
{
    int Counter = 0; 

    for (int i = 0; i < Str.length(); i++)
    {
        if (IsVowel(Str[i]))
            Counter++;
    }

    return Counter;
}

int main()
{
    string Str = ReadString("Please Enter Your String : ");

    cout << "\nNumber of vowerls is : " << CountVowels(Str) << endl;

    return 0;
}