#include <iostream>
using namespace std;

int main()
{
	// Note By default everything is signed
	int v1;
	signed int v2;
	unsigned int v3;

	// Both are the same
	short int v4;
	short v5;

	// Both are the same
	unsigned short int v6;
	unsigned short v7;

	// Both are the same
	signed long int v8;
	long int v9;
	long v10;

	unsigned long v11;

	long long int v12;

	unsigned long long v13;

	long double v14;

	// Both are the same
	signed char v15;
	char v16;

	unsigned char v17;


	// Type Modifiers (only used for those types)
	/*
	signed		==>		(int, char)
	unsigned	==>		(int, char)
	short		==>		(int, double, char)
	long		==>		(int, double, char)
	*/

	// short (2 byte), int (4 byte), long (8 byte)
	// float (4 byte), double (8 byte), long double (12 byte)

	double distance = 56E12; // 56E12 is equal to 56*10^12
	cout << distance << endl;

	short d = 3434233; // Error! out of range or truncate the number and result will be wrong
	cout << d << endl;
	
	unsigned int a = -10; // Error! can only store positive numbers
	cout << a << endl;

	cout << endl << endl;

	// How to know the size of any data type you will use
	cout << "***************************************************************\n";
	cout << "The size of bool data type is " << sizeof(bool) << " byte(s)\n";
	cout << "The size of char data type is " << sizeof(char) << " byte(s)\n";
	cout << "The size of short data type is " << sizeof(short int) << " byte(s)\n";
	cout << "The size of int data type is " << sizeof(int) << " byte(s)\n";

	cout << "The size of long data type is " << sizeof(long) << " byte(s)\n";
	cout << "The size of long long data type is " << sizeof(long long) << " byte(s)\n";

	cout << "The size of float data type is " << sizeof(float) << " byte(s)\n";
	cout << "The size of double data type is " << sizeof(double) << " byte(s)\n";
	cout << "***************************************************************\n";

	cout << endl << endl;

	cout << "************************************************************************\n";
	cout << "char Range: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
	cout << "unsigned char Range: (" << 0 << ", " << UCHAR_MAX << ")\n";

	cout << "short int Range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
	cout << "unsigned short int Range: (" << 0 << ", " << USHRT_MAX << ")\n\n";

	cout << "int Range: (" << INT_MIN << ", " << INT_MAX << ")\n";
	cout << "unsigned int Range: (" << 0 << ", " << UINT_MAX << ")\n";
	cout << "long int Range: (" << LONG_MIN << ", " << LONG_MAX << ")\n";
	cout << "unsigned long int Range: (" << 0 << ", " << ULONG_MAX << ")\n\n";

	cout << "long long int Range: (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
	cout << "unsigned long long int Range: (" << 0 << ", " << ULLONG_MAX << ")\n\n";

	cout << "float Range: (" << FLT_MIN << ", " << FLT_MAX << ")\n";
	cout << "float(negative) Range: (" << -FLT_MIN << ", " << -FLT_MAX << ")\n\n";

	cout << "double Range: (" << DBL_MIN << ", " << DBL_MAX << ")\n";
	cout << "double(negative) Range: (" << -DBL_MIN << ", " << -DBL_MAX << ")\n";
	cout << "long double Range: (" << LDBL_MIN_10_EXP << ", " << LDBL_MAX_10_EXP << ")\n";
	cout << "************************************************************************\n";

	return 0;
}