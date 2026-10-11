#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

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

void PrintClientRecord(stClient Client)
{
    cout << "| " << left << setw(15) << Client.AccountNumber;
    cout << "| " << left << setw(10) << Client.PinCode;
    cout << "| " << left << setw(40) << Client.Name;
    cout << "| " << left << setw(12) << Client.Phone;
    cout << "| " << left << setw(15) << Client.AccountBalance;
}

void PrintAllClientsData(vector <stClient> vClients)
{
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";

    cout << "\n___________________________________________________________________________________________________________\n\n";
    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(15) << "Account Balance";
    cout << "\n___________________________________________________________________________________________________________\n\n";

    for (stClient& Client : vClients)
    {
        PrintClientRecord(Client);
        cout << endl;
    }

    cout << "\n___________________________________________________________________________________________________________\n\n";
}

int main()
{
    vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    PrintAllClientsData(vClients);

    return 0;
}