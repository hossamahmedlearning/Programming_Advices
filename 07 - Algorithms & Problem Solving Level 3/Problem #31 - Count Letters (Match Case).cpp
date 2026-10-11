#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char ReadChar(string Message)
{
    char c;
    cout << Message;
    cin >> c;
    return c;
}

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

short CountLetter(string Str, char c, bool MatchCase = true)
{
    short Counter = 0;

    for (short i = 0; i < Str.length(); i++)
    {
        if (MatchCase)
        {
            if (Str[i] == c)
                Counter++;
        }
        else
        {
            if (tolower(Str[i]) == tolower(c))
                Counter++;
        }
    }

    return Counter;
}

int main()
{
    string Str = ReadString("PLease Enter Your String : ");
    char c = ReadChar("\nPlease Enter a Character : ");

    cout << "\nLetter \'" << c << "\' Count = " << CountLetter(Str, c) << endl;
    cout << "Letter \'" << c << "\' Or \'" << InvertLetterCase(c) << "\' Count = " << CountLetter(Str, c, false) << endl;
    
    return 0;
}