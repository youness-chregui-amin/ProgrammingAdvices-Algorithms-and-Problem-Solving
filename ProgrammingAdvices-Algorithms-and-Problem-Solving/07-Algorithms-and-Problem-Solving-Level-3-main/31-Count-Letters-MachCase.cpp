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

char ReadChar()
{
    char S1;
    cout << "Please Enter Your Character?\n";
    cin >> S1;

    return S1;
}

char InvertLetterCase(char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

short CountLetter(string S1, char Letter, bool SensetiveCase = true)
{
    short Countr = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (SensetiveCase)
        {
            if (S1[i] == Letter)
            {
                Countr++;
            }
        }
        else
        {
            if (toupper(S1[i]) == toupper(Letter))
            {
                Countr++;
            }
        }
    }

    return Countr;
}

int main()
{
    string S1 = ReadString();
    char Ch1 = ReadChar();

    cout << "\nLetter '" << Ch1 << "' Count = " << CountLetter(S1, Ch1);
    cout << "\nLetter '" << Ch1 << "' Or '" << InvertLetterCase(Ch1) << "' Count = " << CountLetter(S1, Ch1, false);
}