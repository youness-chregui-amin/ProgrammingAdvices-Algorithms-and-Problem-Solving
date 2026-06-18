#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

string ReadString()
{
    string S1;
    cout << "Please Enter AccountNumber?\n";
    getline(cin, S1);

    return S1;
}

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;

    short pos = 0;
    string sWord;

    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // substr(start, length)
        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        S1.erase(0, pos + Delim.length()); // erase(start, length)
    }

    if (S1 != "") // darori had lconditon bach maytb3ach new line
    {
        vString.push_back(S1);
    }

    return vString;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
    sClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]); // cast string to double

    return Client;
}

vector<sClient> LoadCleintsDataFromFile(string FileName)
{
    /*
        Reading → ios::in

        Writing → ios::out

        Appending → ios::app
    */

    fstream file;

    file.open(ClientsFileName, ios::in); // Read Mode
    string Line;

    vector<sClient> vClient;
    sClient Client;

    if (file.is_open())
    {
        while (getline(file, Line))
        {
            Client = ConvertLinetoRecord(Line, "#//#");
            vClient.push_back(Client);
        }
    }
    return vClient;
}

bool FindClientByAccountNumber(string AccountNumber, sClient &Client)
{
    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    for (sClient &cl : vClients)
    {
        if (cl.AccountNumber == AccountNumber)
        {
            /*
                When this runs :

                Client = cl;

            C++ performs a member - wise copy :

                Equivalent to :

                Client.AccountNumber = cl.AccountNumber;
                Client.PinCode = cl.PinCode;
                Client.Name = cl.Name;
                Client.Phone = cl.Phone;
                Client.AccountBalance = cl.AccountBalance;
            */

            Client = cl;
            return true;
        }
    }

    return false;
}

void PrintClientCard(sClient Client)
{
    cout << "\nThe following are the client details:\n";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code     : " << Client.PinCode;
    cout << "\nName         : " << Client.Name;
    cout << "\nPhone        : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

int main()
{
    sClient Client;
    string AccountNumber = ReadString();

    if (FindClientByAccountNumber(AccountNumber, Client))
        PrintClientCard(Client);
    else
        cout << "\nClient With Account Number (" << AccountNumber << ") is Not Found!";

    return 0;
}