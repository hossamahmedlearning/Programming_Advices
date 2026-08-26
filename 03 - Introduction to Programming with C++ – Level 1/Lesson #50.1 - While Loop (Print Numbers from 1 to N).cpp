#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Please enter number : ";
    cin >> number;

    int counter = 1;
    while (counter <= number)
    {
        cout << counter << endl;
        counter++;
    }

    return 0;
}