#include <iostream>
#include <string>

using namespace std;

struct stClient
{
    string AccountNumber = "";
    string PinCode = "";
    string Name = "";
    string Phone = "";
    double AccountBalance = 0;
};

stClient ReadClientData()
{
    stClient Client;
    cout << "Please Enter Client Data : \n\n";

    cout << "Enter Account Number ? ";
    getline(cin >> ws, Client.AccountNumber);

    cout << "Enter PinCode ? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name ? ";
    getline(cin, Client.Name);

    cout << "Enter Phone ? ";
    getline(cin, Client.Phone);

    cout << "Enter Account Balance ? ";
    cin >> Client.AccountBalance;

    return Client;
}

string ConvertRecordToLine(stClient Client, string Delim)
{
    string Record = "";

    Record = Client.AccountNumber + Delim;
    Record += Client.PinCode + Delim;
    Record += Client.Name + Delim;
    Record += Client.Phone + Delim;
    Record += to_string(Client.AccountBalance);

    return Record;
}

int main()
{
    stClient Client = ReadClientData();

    cout << "\n\nClient Record For Saving Is : \n";
    cout << ConvertRecordToLine(Client, "#//#") << endl;

    return 0;
}