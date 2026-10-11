#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

void PrintClientRecord(stClient Client)
{
    cout << "\n\nThe following is the extracted client record : \n\n";
    cout << "Account Number : " << Client.AccountNumber << endl;
    cout << "Pin Code       : " << Client.PinCode << endl;
    cout << "Name           : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Account Balance : " << Client.AccountBalance << endl;
}

int main()
{
    string Record = "A150#//#1234#//#Hossam Ahmed#//#253245234233#//#5000.000000";

    cout << "Line Record Is : \n";
    cout << Record << endl;

    stClient Client = ConvertLineToRecord(Record, "#//#");
    PrintClientRecord(Client);

    return 0;
}