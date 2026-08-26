#include <iostream>
using namespace std;

string getDayName(short dayNumber)
{
    if (dayNumber == 1)
        return "Sunday";
    else if (dayNumber == 2)
        return "Monday";
    else if (dayNumber == 3)
        return "Tuesday";
    else if (dayNumber == 4)
        return "Wednesday";
    else if (dayNumber == 5)
        return "Thursday";
    else if (dayNumber == 6)
        return "Friday";
    else if (dayNumber == 7)
        return "Saturday";
    else
        return "Error";
}

int main()
{
    short day;

    cout << "Please enter day number : ";
    cin >> day;

    cout << "\nIt's " << getDayName(day) << endl;

    return 0;
}