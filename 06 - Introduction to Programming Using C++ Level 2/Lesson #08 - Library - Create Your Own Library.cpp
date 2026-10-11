#include <iostream>
#include "MyLib.h" // this is my library (local library)
#include "MyInputLib.h"

// for best practice don't use namespace for your library to avoid conflict with other libraries
using namespace std;
//using namespace MyLib;
//using namespace MyInputLib;

int main()
{
	MyLib::Test();

	cout << MyLib::Sum2Numbers(10, 20) << endl;

	int Number = MyInputLib::ReadNumber("Please Enter a Number : ");
	cout << Number << endl;

	return 0;
}