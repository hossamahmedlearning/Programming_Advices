#include <iostream>

using namespace std;

void MyFunc()
{
    static int Number = 1; // life time static variable is the full program
    cout << "Value of Number : " << Number << "\n";

    Number++;
}

int main()
{
    MyFunc();
    MyFunc();
    MyFunc();

    return 0;
}