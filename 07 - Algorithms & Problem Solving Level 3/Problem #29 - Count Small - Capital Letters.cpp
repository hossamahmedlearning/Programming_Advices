#include <iostream>
#include <string>
#include <cctype>

using namespace std;

enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };

string ReadString(string Message)
{
    string Str;
    cout << Message;
    getline(cin, Str);
    return Str;
}

int CountLetters(string Str, enWhatToCount WhatToCount = enWhatToCount::All)
{
    if (WhatToCount == enWhatToCount::All)
        return Str.length();

    int Counter = 0;

    for (int i = 0; i < Str.length(); i++)
    {
        if (WhatToCount == enWhatToCount::SmallLetters && islower(Str[i]))
            Counter++;
        if (WhatToCount == enWhatToCount::CapitalLetters && isupper(Str[i]))
            Counter++;
    }

    return Counter;
}

int CountCapitalLettersInString(string Str)
{
    int Counter = 0;

    for (int i = 0; i < Str.length(); i++)
    {
        if (isupper(Str[i]))
            Counter++;
    }

    return Counter;
}

int CountSmallLettersInString(string Str)
{
    int Counter = 0;

    for (int i = 0; i < Str.length(); i++)
    {
        if (islower(Str[i]))
            Counter++;
    }

    return Counter;
}

int main()
{
    string Str = ReadString("PLease Enter Your String : ");

    cout << "\nString Length = " << Str.length() << endl;
    cout << "Capital Letters Count = " << CountCapitalLettersInString(Str) << endl;
    cout << "Small Letters Count = " << CountSmallLettersInString(Str) << endl;

    cout << "\n\nMethod 2 : \n";

    cout << "\nString Length = " << CountLetters(Str) << endl;
    cout << "Capital Letters Count = " << CountLetters(Str, enWhatToCount::CapitalLetters) << endl;
    cout << "Small Letters Count = " << CountLetters(Str, enWhatToCount::SmallLetters) << endl;
    
    return 0;
}