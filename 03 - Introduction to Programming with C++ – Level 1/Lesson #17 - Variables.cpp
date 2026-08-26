#include <iostream>
using namespace std;

int main()
{
    /*
    Data Types in C++

    1- Fundamentals Data Types
        integral type
            int : whole numbers : 712
            char : single character : 'A' because ASCII code
        floating type
            float : floating point : 14.5
            double : floatring point : 14.5
        boolean type
            bool : true or false
        string type
            string : text : "Mohammed"
        void type
            empty
        wide character type
            wchar_t : for UNICODE Char

    2- Derived Data Types
        function
        array
        pointer
        reference

    3- User-Defined Data Types
        class
        structure
        union
        enum
        type def
    */

    // Declaring (Creating) Variables
    int myAge = 45;
    cout << "My age is " << myAge << " years old." << endl;

    cout << endl << endl;

    // Other Types :
    int myNumber = 52;
    float myFloatNumber = 7.84;
    double myDoubleNumber = 21.89822;
    char myLetter = 'H';
    string myText = "Hossam";
    bool myBoolean = true;

    cout << myNumber << endl;
    cout << myFloatNumber << endl;
    cout << myDoubleNumber << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    cout << endl;

    // Declare Many Variables
    int x = 4, y = 10, sum = x + y;
    cout << sum << endl;

    cout << endl;

    char char1 = 'A', char2 = 'B', char3 = 'C';
    cout << char1 << char2 << char3 << " reversed is " << char3 << char2 << char1 << endl;

    // Naming Variables
    /*
    1- var must be unique names
    2- name should be descriptive (easy to understand)
    */

    // The general rules for naming variables are :
    /*
    1- names can contain letters, digits and underscores
    2- names must begin with a letter or an underscore (_)
    3- var is case sensitive (myVar != myvar)
    4- names can't contain whitespaces or specia characters like !, #, .......
    5- reserved word (like C++ keywords, such as int) can't be used as names
    */

    // Why Constants : read only variable can't be edited
    /*
    const int minutesPerHours = 60;
    const float PI = 3.14;
    */

    const int minutesPerHours = 60;
    const float PI = 3.14;

    return 0;
}