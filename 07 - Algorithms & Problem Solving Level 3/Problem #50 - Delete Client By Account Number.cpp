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
    bool MarkForDelete = false;
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

bool FindClientByAccountNumber(string AccountNumber, vector<stClient> vClients, stClient& Client)
{
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

void MarkClientForDeleteByAccountNumber(string AccountNumber, vector <stClient>& vClients)
{
    for (stClient& Client : vClients)
    {
        if (Client.AccountNumber == AccountNumber)
        {
            Client.MarkForDelete = true;
            return;
        }
    }
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

void SaveClientsDataToFile(string ClientsFileName, vector <stClient> vClients)
{
    fstream File;
    File.open(ClientsFileName, ios::out);

    if (File.is_open())
    {
        for (stClient& Client : vClients)
        {
            if (!Client.MarkForDelete)
                File << ConvertRecordToLine(Client, "#//#") << endl;
        }

        File.close();
    }
}

bool DeleteClientByAccountNumber(string AccountNumber, vector <stClient>& vClients)
{
    stClient Client;
    char Answer = 'y';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);

        cout << "\n\nAre you sure you want delete this client ? Y/N ? ";
        cin >> Answer;

        if (tolower(Answer) == 'y')
        {
            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
            SaveClientsDataToFile(ClientsFileName, vClients);

            vClients = LoadClientsDataFromFile(ClientsFileName);

            cout << "\nClient Deleted Sussessfully." << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        cout << "\nClient With Account Number (" << AccountNumber << ") Not Found!" << endl;
        return false;
    }
}

int main()
{
    vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadAccountNumber();

    DeleteClientByAccountNumber(AccountNumber, vClients);

    return 0;
}