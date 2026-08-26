#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };

int GetRandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

char GetRandomChar(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return char(GetRandomNumber(97, 122));
        break;
        
    case enCharType::CapitalLetter:
        return char(GetRandomNumber(65, 90));
        break;

    case enCharType::SpecialChar:
        return char(GetRandomNumber(33, 47));
        break;

        case enCharType::Digit:
        return char(GetRandomNumber(48, 57));
        break;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomChar(enCharType::SmallLetter) << endl;
    cout << GetRandomChar(enCharType::CapitalLetter) << endl;
    cout << GetRandomChar(enCharType::SpecialChar) << endl;
    cout << GetRandomChar(enCharType::Digit) << endl;

    return 0;
}