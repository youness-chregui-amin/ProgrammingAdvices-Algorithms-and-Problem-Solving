#include <string>
#include <iostream>
#include <vector>
using namespace std;

string JoinString(vector<string> vString, string Delim)
{
    string S;
    short Counter = 1;

    for (string &elm : vString)
    {

        S += elm;
        if (Counter != vString.size() )
        {
            S += Delim;
        }
        Counter++;
    }
    return S;
}

int main()
{

    vector<string> vString = {"messi", "suarez", "neymar", "neuer"};

    cout << JoinString(vString, "-");

    return 0;
}