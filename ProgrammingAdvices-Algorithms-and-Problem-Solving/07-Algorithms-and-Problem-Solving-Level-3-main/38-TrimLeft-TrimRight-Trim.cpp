#include <string>
#include <iostream>
using namespace std;

string TrimLeft(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(i, S1.length() - i);
        }
    }
    return "";
}

string TrimRight(string S1)
{
    for (short i = S1.length() - 1; i > 0; i--)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(0, i + 1);
        }
    }
    return "";
}

string Trim(string S1)
{
    return TrimRight(TrimLeft(S1));
}

int main()
{
    string S1 = "    Aymane Lazaar    ";

    cout << "\nString = -" << S1 << '-';
    cout << "\n\nTrim Left = -" << TrimLeft(S1) << '-';
    cout << "\nTrim Right = -" << TrimRight(S1) << '-';
    cout << "\nTrim = -" << Trim(S1) << '-';

    return 0;
}

// *************Solution 2*************

/*
string TrimLeft(string S1)
{
    short pos = 0;
    while (S1.find(' ') <= 0)
    {
        S1.erase(0, 1);
    }

    return S1;
}

string TrimRight(string S1)
{
    short pos = S1.length() - 1;
    while (pos >= 0 && S1[pos] == ' ')
    {
        S1.erase(pos, 1);
        pos--;
    }

    return S1;
}

string Trim(string S1)
{
    return TrimRight(TrimLeft(S1));
}

int main()
{
    string S1 = "    Aymane Lazaar    ";

    cout << " Trim Left = -" << TrimLeft(S1) << "-\n";
    cout << " Trim Right = -" << TrimRight(S1) << "-\n";
    cout << " Trim = -" << Trim(S1) << "-\n";
    return 0;
}
    */