#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}

int main()
{
    int Number = ReadNumber("Please Enter a Number To Check : ");
    string Result;

    Result = (Number == 0) ? "Zero" : (Number > 0) ? "Positive" : "Negative";

    cout << "\nNumber Is " << Result << endl;
   
    return 0;
}