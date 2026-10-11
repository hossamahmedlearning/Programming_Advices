#pragma once

#include <iostream>
#include "MyLib.h" 

using namespace std;

namespace MyInputLib
{
	int ReadNumber(string Message)
	{
		int Number;
		cout << Message;
		cin >> Number;
		return Number;
	}
}