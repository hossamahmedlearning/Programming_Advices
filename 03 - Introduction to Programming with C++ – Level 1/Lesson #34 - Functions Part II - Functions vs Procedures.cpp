#include <iostream>
#include <cmath>
using namespace std;

// procedure
void myFunction()
{
	cout << "This is my first procedure, it got executed :-)" << endl;
}

// function
string myFunction2()
{
	return "This is my first returning value function, this is the value.";
}

float myFunction3()
{
	float x = 10.5;
	float y = 20.3;

	return x * y;
}

int main()
{
	float result;

	myFunction();
	cout << myFunction2() << endl;
	
	// fun should't have any print statment, procedure can has print statment
	result = ceil(myFunction3());
	cout << "Result : " << result << endl;

	return 0;
}