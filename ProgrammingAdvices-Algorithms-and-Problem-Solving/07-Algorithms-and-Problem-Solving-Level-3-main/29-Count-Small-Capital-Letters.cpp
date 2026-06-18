#include <string>
#include <iostream>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

enum enWhatToCount
{
    SmallLetters = 0,
    CapitalLetters = 1,
    All = 3
};

short CountLetters(string S1, enWhatToCount whatToCount = enWhatToCount::All)
{
    if (enWhatToCount::All == whatToCount)
    {
        return S1.length();
    }

    short countr = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]) && enWhatToCount::SmallLetters == whatToCount)
        {
            countr++;
        }

        if (isupper(S1[i]) && enWhatToCount::CapitalLetters == whatToCount)
        {
            countr++;
        }
    }

    return countr;
}

short CountSmallLetters(string S1)
{
    short countSmallLetters = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
        {
            countSmallLetters++;
        }
    }
    return countSmallLetters;
}

short CountCapitalLetters(string S1)
{
    short countCapitalLetters = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i]))
        {
            countCapitalLetters++;
        }
    }
    return countCapitalLetters;
}

int main()
{
    string S1 = ReadString();

    cout << "\n\n Method 1\n";
    cout << "\nString Length = " << CountLetters(S1);
    cout << "\nCapital Letters Count= " << CountLetters(S1, enWhatToCount::CapitalLetters);
    cout << "\nSmall Letters Count= " << CountLetters(S1, enWhatToCount::SmallLetters);

    cout << "\n\n Method 2\n";

    cout << "\nString Length = " << S1.length();
    cout << "\nCapital Letters Count= " << CountCapitalLetters(S1);
    cout << "\nSmall Letters Count= " << CountSmallLetters(S1);
}