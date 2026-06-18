#include <string>
#include <iostream>
#include <vector>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
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

    if (S1 != "")//darori had lconditon bach maytb3ach new line
    {
        vString.push_back(S1);
    }

    return vString;
}

int main()
{
    vector<string> vString;

    vString = SplitString(ReadString(), " ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string &s : vString)
    {
        cout << s << endl;

        /*

         ماذا يفعل endl هنا؟
         cout << s << endl;


         s فارغ ➜ لا يطبع شيئًا

         endl ➜ يطبع سطرًا جديدًا

         📌 لذلك:

         كل عنصر فارغ في الـ vector

         ينتج عنه سطر فارغ على الشاشة

    */
    }

    /*

    ماذا يفعل endl هنا؟
    cout << s << endl;


    s فارغ ➜ لا يطبع شيئًا

    endl ➜ يطبع سطرًا جديدًا

    📌 لذلك:

    كل عنصر فارغ في الـ vector

    ينتج عنه سطر فارغ على الشاشة

    */

    // string s1;
    // vString.push_back(s1);
    // vString.push_back(s1);
    // vString.push_back(s1);
    // for (string &s : vString)
    // {
    //     cout << s << endl;
    // }

    return 0;
}