#include <iostream>
using namespace std;

int ReadIntNumberInRange(int From, int To)
{
    int Number;
    cout << "Please enter a number between " << From << " and " << To << endl;
    cin >> Number;

    while (Number < From && Number > To)
    {
        cout << "Wrong Number,";
        cout << "Please enter a number between " << From << " and " << To << endl;
        cin >> Number;
    }

    return Number;
}

int main()
{
	// 1 ==> print numbers from 1 to 5 using for and while loops
    cout << "\n For Loop \n";
    // for loop from 1 to 5
    for (int x = 1; x <= 5; x++)
    {
        cout << x << endl;
    }

    cout << "\n While Loop \n";
    // while loop from 1 to 5
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }

    cout << endl << endl;




	// 2 ==> read a positive number
    int Number;
    cout << "Please enter a positive number?\n";
    cin >> Number;

    while (Number < 0)
    {
        cout << "Wrong Number, Plz Enter a positve Number ?\n";
        cin >> Number;
    }

    cout << "\nThe number you entered is " << Number << endl << endl << endl;




	// 3 ==> read a number between 18 and 45
    cout << "\n The Number is " << ReadIntNumberInRange(18, 45) << endl;

    return 0;
}