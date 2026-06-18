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

void PrintClientRecord(sClient Client)
{
    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(10) << left << Client.PinCode;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.Phone;
    cout << "| " << setw(12) << left << Client.AccountBalance;
}

void PrintAllClientsData(vector<sClient> vClients)
{
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ")Client(s).";
    cout
        << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    // Method 1
    for (sClient &client : vClients)
    {
        PrintClientRecord(client);
        cout << endl;
    }

    /*Method 2
    for (short i = 0; i < vClients.size(); i++)
    {
        PrintClientRecord(vClients[i]);
        cout << endl;

        //Or you can print struct of clinet in vector like this
        // cout<<vClients[i].AccountBalance;
        // cout<<vClients[i].AccountNumber;
        //  ...
    }*/

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
}

int main()
{

    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    PrintAllClientsData(vClients);

    return 0;

}
