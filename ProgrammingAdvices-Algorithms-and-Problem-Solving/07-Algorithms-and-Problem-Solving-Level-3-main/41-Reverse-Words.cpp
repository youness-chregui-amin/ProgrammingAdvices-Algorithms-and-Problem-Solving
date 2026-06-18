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

string ReverseWordsInString(string S1)
{
    vector<string> vString;
    string S2 = "";
    vString = SplitString(S1, " ");

    // vector<string>::iterator iter = vString; // darori khasni n achar 3la chi elm mymknch n7at vector kaml darori nwid for example .end() or .begin()

    vector<string>::iterator iter = vString.end(); // end(): تعيد iterator يشير إلى ما بعد آخر عنصر (ليس العنصر الأخير، بل المكان الفارغ بعده). هذه نقطة التوقف.

    while (iter != vString.begin())
    {
        iter--;
        S2 += *iter + " ";
    }

    S2 = S2.substr(0, S2.length() - 1); // remove last space.

    return S2;
}

// method 2

/*string ReverseWordsInString(string S1)
{
    string sReverse = "";

    for (short i = S1.length() - 1; i > 0; i--)
    {
        if (S1[i] == ' ')
        {
            sReverse += S1.substr(i + 1, S1.length() - 1) + " ";
            S1.erase(i, S1.length() - 1);
        }
    }
    sReverse += S1;

    return sReverse;
}
*/
int main()
{

    // method 1
    cout << ReverseWordsInString(ReadString());

    // method 2
    //  cout << ReverseWordsInString(ReadString());

    return 0;
}