#include <iostream>
using namespace std;

// enum start from 0 to ... (unitll you change it)
enum enColor { red = 100, green = 200, yellow = 300, blue = 400 };
enum enDirection { north, south, east, west };
enum enWeek { sat, sun, mon, tue, wed, thu, fri };
enum enGender { male, female };
enum enStatus { single, married };

int main()
{
	enColor myColor;
	enDirection myDirection;
	enWeek today;
	enStatus myStatus;

	myColor = enColor::blue;
	myDirection = enDirection::north;
	today = enWeek::sun;
	myStatus = enStatus::single;

	cout << myColor << endl;
	cout << myDirection << endl;
	cout << today << endl;
	cout << myStatus << endl;

	return 0;
}