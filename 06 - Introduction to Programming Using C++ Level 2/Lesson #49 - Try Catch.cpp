#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // exception handelling make the program slow (don't use it in all things)

    vector <int> vNumbers = { 1,2,3,4,5 };

    try
    {
        cout << vNumbers.at(5); // this line can make problem in run time
    }
    catch (...)
    {
        cout << "Out Of Boundries Exception!" << endl; // the handel of the problem if happen
    }

    return 0;
}