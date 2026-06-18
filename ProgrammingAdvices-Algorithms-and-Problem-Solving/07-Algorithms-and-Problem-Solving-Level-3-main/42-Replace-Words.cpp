#include <string>
#include <iostream>
#include <vector>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please  Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo)
{
    short pos = S1.find(StringToReplace);

    while (pos != string::npos)
    {
        S1.replace(pos, StringToReplace.length(), sRepalceTo);
        pos = S1.find(StringToReplace);//find next
    }

    return S1;
}

/*Method 2
string ReplaceWord(string S1, string Delim)
{
    string Word = "Argentine";

    string S2 = "";

    string sWord = "";

    short pos = 0;

    while ((pos = S1.find(Delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            if (sWord == "maroc")
            {
                S2 += Word + " ";
            }
            else
            {
                S2 += sWord + " ";
            }
        }
        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "" && S1 == "maroc")
    {
        S1 = Word;
    }

    return S2.substr(0, S2.length()) + S1;
}
*/
int main()
{

    string S1 = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "Jordan";
    string ReplaceTo = "USA";

    cout << "\nOrigial String\n"
         << S1;
    cout << "\n\nString After Replace:";
    cout << "\n"
         << ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo);

    // Method 2
    //  cout << ReplaceWord(ReadString(), " ") << '-';

    return 0;
}