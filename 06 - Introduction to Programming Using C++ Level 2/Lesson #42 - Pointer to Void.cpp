#include <iostream>

using namespace std;

int main()
{
    void* ptr; // generic pointer

    float f1 = 10.5;
    int x = 50;

    ptr = &f1;

    cout << ptr << endl;
    cout << *(static_cast<float*>(ptr)) << endl; // must make explicit casting to get the value

    ptr = &x;

    cout << ptr << endl;
    cout << *(static_cast<int*>(ptr)) << endl; // must make explicit casting to get the value

    return 0;
}