#include <iostream>
using namespace std;

struct stContactInfo
{
	string phone;
	string email;
	string linkedInAccount;
};

struct stAddress
{
	string street;
	string poBox;
	string building;
};

struct stPersonInfo
{
	string name;
	short age;
	string city;
	string country;
	float monthlySalary;
	char gender;
	bool isMarried;
	stAddress address;
	stContactInfo contactInfo;
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

	cout << "Please enter your gender (M/F) : ";
	cin >> person1.gender;

	cout << "Please enter your Married status [0]:No, [1]:Yes : ";
	cin >> person1.isMarried;

	cout << "Please enter your street : ";
	cin >> person1.address.street;

	cout << "Please enter your Post Box : ";
	cin >> person1.address.poBox;

	cout << "Please enter your building number : ";
	cin >> person1.address.building;

	cout << "Please enter your phone : ";
	cin >> person1.contactInfo.phone;

	cout << "Please enter your email : ";
	cin >> person1.contactInfo.email;

	cout << "Please enter your linked in account : ";
	cin >> person1.contactInfo.linkedInAccount;

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
	cout << "Street          : " << person1.address.street << endl;
	cout << "Post Box        : " << person1.address.poBox << endl;
	cout << "Building Number : " << person1.address.building << endl;
	cout << "Phone           : " << person1.contactInfo.phone << endl;
	cout << "Email           : " << person1.contactInfo.email << endl;
	cout << "LinkedIN Account: " << person1.contactInfo.linkedInAccount << endl;
	cout << "*********************************\n";


	return 0;
}