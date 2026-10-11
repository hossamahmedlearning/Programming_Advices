#include <iostream>
#include <string>

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

short CountLetter(string Str, char c)
{
    short Counter = 0;

    for (short i = 0; i < Str.length(); i++)
    {
        if (Str[i] == c)
            Counter++;
    }

    return Counter;
}

int main()
{
    string Str = ReadString("PLease Enter Your String : ");
    char c = ReadChar("\nPlease Enter a Character : ");

    cout << "\nLetter \'" << c << "\' Count = " << CountLetter(Str, c) << endl;

    return 0;
}