#include <iostream>
using namespace std;

bool isPass(float mark)
{
    if (mark >= 50)
        return true;
    else
        return false;
}

int main()
{
    float mark;

    cout << "Please enter your mark : ";
    cin >> mark;

    if (isPass(mark))
    {
        cout << "\nPass\n";
    }
    else
    {
        cout << "\nFail\n";
    }

    return 0;
}