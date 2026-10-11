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

int main()
{
    char c = ReadChar("Please Enter a Character : ");

    if (IsVowel(c))
        cout << "\nYes, letter " << c << " is vowel.\n";
    else
        cout << "\nNo, letter " << c << " is not vowel.\n";

    return 0;
}