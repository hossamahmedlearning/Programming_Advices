#pragma once // this is the compiler directive

#include <iostream>

using namespace std;

// add functions and procedure under namespace to make it organized

namespace MyLib
{
	void Test()
	{
		cout << "Hi, This Is My First Function In My First Library!" << endl;
	}

	int Sum2Numbers(int Number1, int Number2)
	{
		return Number1 + Number2;
	}
}
