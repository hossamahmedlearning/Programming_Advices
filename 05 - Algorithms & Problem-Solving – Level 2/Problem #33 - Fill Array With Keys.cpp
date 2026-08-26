#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

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

string GenerateWord(enCharType CharType, short WordLen)
{
    string Word = "";

    for (int i = 1; i <= WordLen; i++)
    {
        Word += GetRandomChar(CharType);
    }

    return Word;
}

string GenerateKey()
{
    string Key = "";

    Key = GenerateWord(CapitalLetter, 4) + "-";
    Key += GenerateWord(CapitalLetter, 4) + "-";
    Key += GenerateWord(CapitalLetter, 4) + "-";
    Key += GenerateWord(CapitalLetter, 4);

    return Key;
}

void FillArrayWithKeys(string arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        arr[i] = GenerateKey();
    }
}

void PrintStringArray(string arr[100], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        cout << "Array[" << i << "] : " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    string arr[100];
    int arrLen = 0;

    arrLen = ReadPositiveNumber("How Many Keys Do You Wnat To Generate : ");

    FillArrayWithKeys(arr, arrLen);

    cout << "\nArray Elements : \n";
    PrintStringArray(arr, arrLen);

    return 0;
}