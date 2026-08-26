#include <iostream>
using namespace std;

struct stAddress
{
	string street1;
	string poBox;
};

struct stOwner
{
	string fullName;
	string phone;
	stAddress address;
};

struct stCar
{
	string brand;
	string model;
	int year;
	stOwner owner;
};

int main()
{
	stCar myCar1, myCar2;

	myCar1.brand = "BMW";
	myCar1.model = "X5";
	myCar1.year = 2000;

	myCar1.owner.fullName = "Hossam Ahmed";
	myCar1.owner.phone = "01032543708";

	myCar1.owner.address.poBox = "Cairo, Shoubra El-Khema";

	myCar2.brand = "Ford";
	myCar2.model = "Mustang";
	myCar2.year = 2022;

	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
	cout << myCar1.owner.fullName << endl;
	cout << myCar1.owner.phone << endl << endl;
	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

	return 0;
}