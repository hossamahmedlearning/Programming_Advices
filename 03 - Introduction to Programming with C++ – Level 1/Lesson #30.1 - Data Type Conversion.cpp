#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st1 = "43.22";

	cout << "String to double : " << stod(st1) << endl;
	cout << "String to float : " << stof(st1) << endl;
	cout << "String to int : " << stoi(st1) << endl;
	cout << endl;




	int n1 = 20;
	cout << "Int to string : " << to_string(n1) << endl;
	cout << endl;




	double n2 = 33.5;
	cout << "Double to string : " << to_string(n2) << endl;
	cout << endl;




	float n3 = 55.23;
	int n4 = n3;
	cout << "Float to string : " << to_string(n3) << endl;
	cout << "Float to int : " << n4 << endl; // implicit conversion
	cout << "Float to int : " << (int) n3 << endl; // explicit conversion using c style
	cout << "Float to int : " << int(n3) << endl; // explicit conversion using int funtion
	cout << endl;

	return 0;
}