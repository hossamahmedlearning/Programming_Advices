#include <iostream>
#include <string>
#include <vector>
#include <fstream>

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

string ReadAccountNumber()
{
    string AccountNumber = "";
    cout << "Please Enter Account Number : ";
    cin >> AccountNumber;
    return AccountNumber;
}

vector <string> SplitString(string Str, string Delim)
{
    vector <string> vTokens;
    short Pos = 0;
    string Word = "";

    while ((Pos = Str.find(Delim)) != std::string::npos)
    {
        Word = Str.substr(0, Pos);

        if (Word != "")
            vTokens.push_back(Word);

        Str.erase(0, Pos + Delim.length());
    }

    if (Str != "")
        vTokens.push_back(Str);

    return vTokens;
}

stClient ConvertLineToRecord(string Line, string Delim)
{
    stClient Client;
    vector <string> vTokens = SplitString(Line, Delim);

    Client.AccountNumber = vTokens[0];
    Client.PinCode = vTokens[1];
    Client.Name = vTokens[2];
    Client.Phone = vTokens[3];
    Client.AccountBalance = stod(vTokens[4]);

    return Client;
}

vector <stClient> LoadClientsDataFromFile(string FileName)
{
    vector <stClient> vClients;
    fstream File;
    File.open(FileName, ios::in);

    if (File.is_open())
    {
        string Line = "";

        while (getline(File, Line))
        {
            vClients.push_back(ConvertLineToRecord(Line, "#//#"));
        }

        File.close();
    }

    return vClients;
}

bool FindClientByAccountNumber(string AccountNumber, stClient& Client)
{
    vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    for (stClient& C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }

    return false;
}

void PrintClientCard(stClient Client)
{
    cout << "\nThe following are the client Details : \n\n";
    cout << "Account Number : " << Client.AccountNumber << endl;
    cout << "Pin Code       : " << Client.PinCode << endl;
    cout << "Name           : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Account Balance : " << Client.AccountBalance << endl;
}

int main()
{
    string AccountNumber = ReadAccountNumber();
    stClient Client;

    if (FindClientByAccountNumber(AccountNumber, Client))
    {
        PrintClientCard(Client);
    }
    else
    {
        cout << "\nClient With Account Number (" << AccountNumber << ") Not Found!" << endl;
    }

    return 0;
}