#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Data loss (from bigger to smaller) ==>
	// long double, double, float, long, int, short, char

	// convert double to int
	int Num1;
	double Num2 = 18.99;

	Num1 = Num2; //Implecit Conversion from double to int
	Num1 = (int)Num2; //Explicit Conversion
	Num1 = int(Num2); //Explicit Conversion

	cout << Num1 << endl;
	cout << endl << endl;





	// convert string to int, float, double
	string str = "123.456";
	// convert string to int
	int numInt = stoi(str);
	// convert string to float
	float numFloat = stof(str);
	// convert string to double
	double numDouble = stod(str);

	cout << "Num Int = " << numInt << endl;
	cout << "Num Float = " << numFloat << endl;
	cout << "Num Double = " << numDouble << endl;
	cout << endl << endl;





	// convert numbers to string
	int num1 = 123;
	double num2 = 18.99;

	string str1, str2;

	str1 = to_string(num1);
	str2 = to_string(num2);

	cout << str1 << endl;
	cout << str2 << endl;
	return 0;
}