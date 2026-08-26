#include <iostream>
using namespace std;

int main()
{
    // buffer (store things in queue طابور) must not be full , program will be slow

    // endl ==> flush buffer after each print statment
    cout << "Hossam Ahmed" << endl;

    // \n ==> add all print statment in it then flush buffer after finish
    cout << "Hossam Ahmed\n";

    /*
    what shoud i use if i have 1000 print statment
    ==> using /n with 50 statment
    ==> using endl after each 50 statment
    */

    return 0;
}