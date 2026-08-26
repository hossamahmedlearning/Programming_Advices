#include <iostream>
using namespace std;

string getDayName(short dayNumber)
{
    switch (dayNumber)
    {
    case 1:
        return "Sunday";

    case 2:
        return "Monday";

    case 3:
        return "Tuesday";

    case 4:
        return "Wednesday";

    case 5:
        return "Thursday";

    case 6:
        return "Friday";

    case 7:
        return "Saturday";

    default:
        return "Error";
    }
}

int main()
{
    short day;

    cout << "Please enter day number : ";
    cin >> day;

    cout << "\nIt's " << getDayName(day) << endl;

    return 0;
}