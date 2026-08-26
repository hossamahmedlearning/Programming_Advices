#include <iostream>
using namespace std;

int main()
{
    int number = 0, sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Please enter number " << i << " : ";
        cin >> number;

        if (number >= 50)
            continue;

        sum += number;
    }

    cout << "\n\nSum = " << sum << endl;
   
    return 0;
}