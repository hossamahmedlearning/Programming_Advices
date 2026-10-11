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

char InvertLetterCase(char c)
{
    return isupper(c) ? tolower(c) : toupper(c);
}

int main()
{
    char c = ReadChar("Please Enter a Character : ");

    cout << "\nChar after inverting case : \n";
    c = InvertLetterCase(c);
    cout << c << endl;

    return 0;
}