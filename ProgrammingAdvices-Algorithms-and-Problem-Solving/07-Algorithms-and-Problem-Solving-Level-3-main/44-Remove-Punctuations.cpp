#include <string>
#include <iostream>
using namespace std;

// Method1
string RemovePunctuationsFromString(string S1)
{
    string S2 = "";

    for (short i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
        {
            S2 += S1[i];
        }
    }

    return S2;
}

/*Method2
string RemovePunctuationsFromString(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (ispunct(S1[i]))
        {
            S1.erase(i, 1);
            i--;
        }
    }

    return S1;
}
*/

/*Method3
string RemovePunctuationsFromString(string S1)
{
    char punk[] = {';', '.', '\'', ','};

    for (short i = 0; i < S1.length(); i++)
    {
        for (short j = 0; j < 5; j++)
        {
            if (S1[i] == punk[j])
            {
                S1.erase(i, 1);
                i--;
                break;
            }
        }
    }

    return S1;
}
*/

int main()
{

    string S1 = "Welcome:: to Jordan,, Jordan is a nice country; it's amazing..";
    cout
        << "Original String:\n"
        << S1;
    cout << "\n\nPauncuations Removed:\n"
         << RemovePunctuationsFromString(S1);

    return 0;
}