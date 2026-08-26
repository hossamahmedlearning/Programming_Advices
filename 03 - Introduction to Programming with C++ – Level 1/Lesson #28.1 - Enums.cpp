#include <iostream>
using namespace std;

enum enGender { enMale, enFemale };
enum enMaritalStatus { enSingle, enMarried };
enum enColor { red, green, yellow, black };

struct stPersonInfo
{
	string name;
	short age;
	string city;
	string country;
	float monthlySalary;
	enGender gender;
	enMaritalStatus isMarried;
	enColor favouriteColor;
};

int main()
{
	stPersonInfo person1;

	cout << "Please enter your name : ";
	cin >> person1.name;

	cout << "Please enter your age : ";
	cin >> person1.age;

	cout << "Please enter your city : ";
	cin >> person1.city;

	cout << "Please enter your country : ";
	cin >> person1.country;

	cout << "Please enter your monthly salary : ";
	cin >> person1.monthlySalary;

	person1.gender = enGender::enMale;
	person1.isMarried = enMaritalStatus::enSingle;
	person1.favouriteColor = enColor::black;

	cout << endl;

	cout << "*********************************\n";
	cout << "Name            : " << person1.name << endl;
	cout << "Age             : " << person1.age << endl;
	cout << "City            : " << person1.city << endl;
	cout << "Country         : " << person1.country << endl;
	cout << "Monthly Salary  : " << person1.monthlySalary << endl;
	cout << "Yearly Salary   : " << person1.monthlySalary * 12 << endl;
	cout << "Gender          : " << person1.gender << endl;
	cout << "Married         : " << person1.isMarried << endl;
	cout << "Favourite Color : " << person1.favouriteColor << endl;
	cout << "*********************************\n";


	return 0;
}