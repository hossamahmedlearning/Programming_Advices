#include <iostream>
#include <string>

using namespace std;

string ReadString(string Message)
{
    string Str;
    cout << Message;
    getline(cin, Str);
    return Str;
}

string ReplaceWordInStringUsingBuiltInFunction(string Str, string OldWord, string NewWord)
{
    short Pos = 0;

    while ((Pos = Str.find(OldWord)) != std::string::npos)
    {
        Str = Str.replace(Pos, OldWord.length(), NewWord);
    }

    return Str;
}

int main()
{
    string Str = ReadString("Please Enter Your String : ");

    cout << "\nString after replace : \n";
    cout << ReplaceWordInStringUsingBuiltInFunction(Str, "Jordan", "USA") << endl;

    return 0;
}