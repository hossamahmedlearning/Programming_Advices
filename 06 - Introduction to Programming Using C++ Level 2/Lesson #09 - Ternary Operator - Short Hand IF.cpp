#include <iostream>

using namespace std;

void PrintPass()
{
    cout << "PASS" << endl;
}

void PrintFail()
{
    cout << "FAIL" << endl;
}

int main()
{
    int Mark = 40;
    string result;

    // Using normal if-else
    if (Mark >= 50)
    {
        result = "PASS";
    }
    else
    {
        result = "FAIL";
    }
    cout << result << endl;

    // Using Short-Hand IF (Ternary Operator)
    result = (Mark >= 50) ? "PASS" : "FAIL";
    cout << result << endl;

    (Mark >= 50) ? cout << "PASS" << endl : cout << "FAIL" << endl; // print

    (Mark >= 50) ? PrintPass() : PrintFail(); // calling function

    (Mark >= 50) ? cout << "PASS" << endl : (Mark >= 50) ? cout << "PASS" << endl : cout << "FAIL" << endl; // nested ternary operator

    return 0;
}