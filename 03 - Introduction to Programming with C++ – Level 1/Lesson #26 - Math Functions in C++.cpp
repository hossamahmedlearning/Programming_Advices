#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// sqrt()
	double x = 64;
	cout << "Square root value of 64 : " << sqrt(x) << endl;  // gives 8
	cout << "Square root value of 50 : " << sqrt(50) << endl; // gives 7.07107

	cout << endl;

	// round()
	cout << "Round value of 2.4 : " << round(2.4) << endl; // يعطي 2 (لأن .4 أصغر من .5)
	cout << "Round value of 2.5 : " << round(2.5) << endl; // يعطي 3 (من .5 فما فوق يقرب للأعلى)
	cout << "Round value of 2.6 : " << round(2.6) << endl; // يعطي 3 (تم تعديل الـ 2.7 لتطابق النص)
	// حساب الجذر التربيعي لـ 50
	cout << "Square root value of 50 : " << sqrt(50) << endl; // يعطي 7.07107
	// دمج الدالتين معاً (Nested Functions): حساب الجذر ثم تقريب النتيجة
	cout << "Round value of sqrt(50) : " << round(sqrt(50)) << endl; // جذر 50 هو 7.07.. وعند تقريبه يعطي 7
	// you can use functions like this in operations like any numbers or variable
	cout << round(2.4) + round(5.6) << endl;

	cout << endl;

	// pow()
	int x1 = 2;
	int y1 = 4;
	cout << "Power value: x^y = (2^4) : " << pow(x1, y1) << endl;  // gives 16
	cout << "Power value: x^y = (4^3) : " << pow(4, 3) << endl;  // gives 64

	cout << endl;

	// ceil(), floor()
	cout << "Ceiling value of  2.9 : " << ceil(2.9) << endl;  // gives 3
	cout << "Floor value of 2.9 is : " << floor(2.9) << endl; // gives 2

	cout << "Ceiling value of -2.9 : " << ceil(-2.9) << endl;  // gives -2
	cout << "Floor value of -2.9 is : " << floor(-2.9) << endl; // gives -3

	cout << endl;

	// abs()
	cout << "Absolute value of -10 : " << abs(-10) << endl; // gives 10
	cout << "Absolute value of 10 : " << abs(10) << endl;   // gives 10

	return 0;
}