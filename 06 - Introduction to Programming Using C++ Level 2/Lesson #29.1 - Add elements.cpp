#include <iostream>
#include <vector>

using namespace std;

void ReadNumbers(vector <int>& vNumbers)
{
    char AddMore = 'y';
    int Number;

    while (tolower(AddMore) == 'y')
    {
        cout << "Please Enter a Number : ";
        cin >> Number;

        vNumbers.push_back(Number);

        cout << "\nDo You Want To Add More Numbers (Y/N) ? ";
        cin >> AddMore;
    } 
}

void PrintNumbers(vector <int>& vNumbers)
{
    cout << "\n\nVector Numbers : ";

    for (int& Number : vNumbers)
    {
        cout << Number << "  ";
    }

    cout << endl;
}

void PrintNumbers()
{

}

int main()
{
    vector <int> vNumbers;

    ReadNumbers(vNumbers);
    PrintNumbers(vNumbers);

    return 0;
}