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

short CountLetters(string S1, char Letter)
{
    short Countr = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] == Letter)
            Countr++;
    }
    
    return Countr;
}

int main()
{
    string S1 = ReadString();
    char Ch1 = ReadChar();

    cout << "\nLetter '" << Ch1 << "' Count = " << CountLetters(S1, Ch1);
}