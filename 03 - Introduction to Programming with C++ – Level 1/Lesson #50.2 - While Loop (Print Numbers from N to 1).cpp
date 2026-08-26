#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Please enter number : ";
    cin >> number;

    int counter = number;
    while (counter >= 1)
    {
        cout << counter << endl;
        counter--;
    }

    return 0;
}