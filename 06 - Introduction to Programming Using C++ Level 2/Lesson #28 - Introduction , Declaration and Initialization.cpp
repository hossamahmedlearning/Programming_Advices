#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumbers = { 10,20,30,40,50 };

    cout << "Numbers Vector = ";

    for (int Number : vNumbers) // take the content of vNumbers to Numbers حتى لو وزنه 2 طن (COPY)
    {
        cout << Number << "  ";
    }

    for (int &Number : vNumbers) // Numbers have the address of the vNumbers content without copy
    {
        cout << Number << "  ";
    }

    cout << endl;

    return 0;
}