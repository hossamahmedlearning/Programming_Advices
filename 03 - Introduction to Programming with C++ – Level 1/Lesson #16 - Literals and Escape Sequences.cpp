#include <iostream>
using namespace std;

int main()
{
    /*
    Literal : things that you want to store 
    Types : 

    Integer, Decimal, Octal, Hexadecimal Literals
    Characters Literals
    Escape Sequences Literals : \n
    */

    /*
    Escape Sequences Literals :
    \\ ==> print backslash
    \t ==> print tab
    \n ==> print new line
    \" ==> print double quote
    \' ==> print single quote
    \a ==> audio bell
    */

    // \\ ==> print backslash
    cout << "M1\\M2\\M3\\M4 \n\n";

    // \t ==> print tab
    cout << "M1\tM2\n";
    cout << "M3\tM4\n\n";

    //  \" ==> print double quote
    cout << "My name is \" Hossam \"\n\n";

    //  \a ==> audio bell
    cout << "\a";

    return 0;
}