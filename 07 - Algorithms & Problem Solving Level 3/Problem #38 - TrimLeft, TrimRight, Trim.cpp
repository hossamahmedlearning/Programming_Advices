#include <iostream>
#include <string>

using namespace std;

string TrimLeft(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        if (Str[i] != ' ')
            return Str.substr(i, Str.length() - i);
    }

    return "";
}

string TrimRight(string Str)
{
    for (int i = Str.length() - 1; i >= 0; i--)
    {
        if (Str[i] != ' ')
            return Str.substr(0, i + 1);
    }

    return "";
}

string Trim(string Str)
{
    return TrimLeft(TrimRight(Str));
}

int main()
{
    string Str = "     Hossam Ahmed Ragab     ";

    cout << "String     = " << Str << endl << endl;
    cout << "Trim Left  = " << TrimLeft(Str) << endl;
    cout << "Trim Right = " << TrimRight(Str) << endl;
    cout << "Trim       = " << Trim(Str) << endl;

    return 0;
}