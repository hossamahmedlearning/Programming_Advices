#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string RemovenPunctuationsFromString(string Str)
{
    string NewStr = "";

    for (int i = 0; i < Str.length(); i++)
    {
        if (!ispunct(Str[i]))
            NewStr += Str[i];
    }

    return NewStr;
}

int main()
{
    string Str = "Welcome to Jordan, Jordan is a nice country; it's amazing.";

    cout << "\nOriginal String : \n";
    cout << Str << endl;

    cout << "\nPunctuations Removed : \n";
    cout << RemovenPunctuationsFromString(Str) << endl;

    return 0;
}