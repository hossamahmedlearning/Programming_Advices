#include <iostream>
using namespace std;

struct stUserInfo
{
    short age;
    bool hasDriverLicense;
};

void readUserInfo(stUserInfo& userInfo)
{
    cout << "Please enter your age : ";
    cin >> userInfo.age;

    cout << "Do you have driver license [0]:No, [1]:Yes ? ";
    cin >> userInfo.hasDriverLicense;
}

bool isAccepted(stUserInfo& userInfo)
{
    if (userInfo.age >= 21 && userInfo.hasDriverLicense)
        return true;
    else
        return false;
}

int main()
{
    stUserInfo userInfo;
    readUserInfo(userInfo);

    if (isAccepted(userInfo))
    {
        cout << "\nHired.\n";
    }
    else
    {
        cout << "\nRejected.\n";
    }

    return 0;
}