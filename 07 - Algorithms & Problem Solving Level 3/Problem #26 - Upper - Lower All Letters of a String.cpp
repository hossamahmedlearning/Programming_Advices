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

string UpperAllString(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = toupper(Str[i]);
    }

    return Str;
}

string LowerAllString(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = tolower(Str[i]);
    }

    return Str;
}

int main()
{
    string Str = ReadString("Please Enter Your String : ");

    cout << "\nString after Upper : \n";
    Str = UpperAllString(Str);
    cout << Str << endl;

    cout << "\nString after Lower : \n";
    Str = LowerAllString(Str);
    cout << Str << endl;

    return 0;
}