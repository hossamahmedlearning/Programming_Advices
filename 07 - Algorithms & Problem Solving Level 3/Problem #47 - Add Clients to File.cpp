#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cctype>

using namespace std;

const string ClientsFileName = "Clients.txt";

struct stClient
{
    string AccountNumber = "";
    string PinCode = "";
    string Name = "";
    string Phone = "";
    double AccountBalance = 0;
};

stClient ReadNewClient()
{
    stClient Client;

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

void SaveClientToFile(string ClientsFileName, string Client)
{
    fstream File;
    File.open(ClientsFileName, ios::out | ios::app);

    if (File.is_open())
    {
        File << Client << endl;
        File.close();
    }
}

void AddNewClient()
{
    stClient Client = ReadNewClient();
    SaveClientToFile(ClientsFileName, ConvertRecordToLine(Client, "#//#"));
}

void AddClients()
{
    char Answer = 'y';

    while (tolower(Answer) == 'y')
    {
        system("CLS");

        cout << "Adding New Client\n\n";
        AddNewClient();

        cout << "\n\nClient Added Successfully, Do you want to add more clients ? Y/N ? ";
        cin >> Answer;
    }
}

int main()
{
    AddClients();

    return 0;
}