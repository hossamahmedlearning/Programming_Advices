#include <iostream>
#include <string>
using namespace std;

struct stPersonInfo
{
	string name;
	short age;
	string city;
	string country;
	float monthlySalary;
	char gender;
	bool isMarried;
};

void readInfo(stPersonInfo& person1)
{
	cout << "Please enter your name : ";
	getline(cin, person1.name);

	cout << "Please enter your age : ";
	cin >> person1.age;

	cout << "Please enter your city : ";
	cin >> person1.city;

	cout << "Please enter your country : ";
	cin >> person1.country;

	cout << "Please enter your monthly salary : ";
	cin >> person1.monthlySalary;

	cout << "Please enter your gender (M/F) : ";
	cin >> person1.gender;

	cout << "Please enter your Married status [0]:No, [1]:Yes : ";
	cin >> person1.isMarried;
}

void printInfo(stPersonInfo person1)
{
	cout << "*********************************\n";
	cout << "Name            : " << person1.name << endl;
	cout << "Age             : " << person1.age << endl;
	cout << "City            : " << person1.city << endl;
	cout << "Country         : " << person1.country << endl;
	cout << "Monthly Salary  : " << person1.monthlySalary << endl;
	cout << "Yearly Salary   : " << person1.monthlySalary * 12 << endl;
	cout << "Gender          : " << person1.gender << endl;
	cout << "Married         : " << person1.isMarried << endl;
	cout << "*********************************\n";
}

int main()
{
	stPersonInfo person1;
	readInfo(person1);
	printInfo(person1);

	return 0;
}