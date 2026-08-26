#include <iostream>
using namespace std;

enum enColor { red, green, yellow, blue };
enum enGender { male, female };
enum enMaritalStatus { single, married };

struct stAddress
{
	string streetName;
	string buildingNo;
	string poBox;
	string zipCode;
};

struct stContactInfo
{
	string phone;
	string email;
	stAddress address;
};

struct stPerson
{
	string firstName;
	string lastName;

	stContactInfo contactInfo;

	enMaritalStatus maritalStatus;
	enGender gender;
	enColor color;
};

int main()
{
	stPerson person1;

	person1.firstName = "Hossam";
	person1.lastName = "Ahmed";


	person1.contactInfo.email = "H@gmail.com";
	person1.contactInfo.phone = "+201032424805";
	person1.contactInfo.address.poBox = "7777";
	person1.contactInfo.address.zipCode = "11194";
	person1.contactInfo.address.streetName = "Masani";
	person1.contactInfo.address.buildingNo = "5B";

	person1.gender = enGender::male;
	person1.maritalStatus = enMaritalStatus::single;
	person1.color = enColor::green;

	cout << person1.contactInfo.address.streetName << endl;

	return 0;
}