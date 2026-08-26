#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
	string firstName;
	string lastName;
	short age;
	string phone;
};

void readInfo(stInfo& person1Info)
{
	cout << "Please enter first name : ";
	cin >> person1Info.firstName;

	cout << "Please enter last name : ";
	cin >> person1Info.lastName;

	cout << "Please enter age : ";
	cin >> person1Info.age;

	cout << "Please enter phone number : ";
	cin >> person1Info.phone;
}

void printInfo(stInfo person1Info)
{
	cout << "**************************" << endl;
	cout << "First name : " << person1Info.firstName << endl;
	cout << "Last name : " << person1Info.lastName << endl;
	cout << "Age : " << person1Info.age << endl;
	cout << "Phone number : " << person1Info.phone << endl;
	cout << "**************************" << endl;
}

int main()
{
	stInfo person1Info;
	readInfo(person1Info);
	printInfo(person1Info);

	cout << endl << endl;

	stInfo person2Info;
	readInfo(person2Info);
	printInfo(person2Info);

	return 0;
}