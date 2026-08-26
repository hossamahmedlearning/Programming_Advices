#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Please enter your number? \n";
    cin >> x;

    if (x > 5)
    {
        cout << "Yes, X is grator than 5 " << endl;
    }
    else
    {
        cout << "No, X is less than 5 " << endl;
    }

    cout << "The code after if body always executed." << endl;

    return 0;
}