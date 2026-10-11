#include <iostream>

using namespace std;

int main()
{
    // ( 12 & 25 ) ==> bitwise op
    // 12 ==> 00001100
    // 25 ==> 00011001
    // &  ==> 00001000 ==> 8 (in decimal)

    cout << "Result : " << (12 & 25) << endl;

    return 0;
}