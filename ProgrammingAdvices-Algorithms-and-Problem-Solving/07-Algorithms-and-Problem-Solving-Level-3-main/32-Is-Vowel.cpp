#include <string>
#include <iostream>
using namespace std;

char ReadChar()
{
    char S1;
    cout << "Please Enter Your Character?\n";
    cin >> S1;

    return S1;
}

bool IsVowel(char Ch1)
{
    Ch1 = tolower(Ch1);

    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

int main()
{
    char Ch1 = ReadChar();

    if (IsVowel(Ch1))
        cout << "\nYES Letter \'" << Ch1 << "\' is vowel";
    else
        cout << "\nNO Letter \'" << Ch1 << "\' is NOT vowel";

    return 0;
}