#include <string>
#include <iostream>
using namespace std;

char ReadChar()
{
    char S1;
    cout << "Please Enter a character?\n";
    cin >> S1;

    return S1;
}

// method 1
char InvertLetterCase(char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1); //toupper AND tolower تُرجع قيمة رقمية (ASCII) Khasni n convirtiha l char 
}

// method 2

/*char InvertLetterCase(char character)
{
    for (int i = 65; i <= 90; i++)
    {
        if (char(i) == character)
        {
            return tolower(character);
        }
    }
    return toupper(character);
}*/

int main()
{
    char Ch1 = ReadChar();
    cout << "\nChar after inverting case:\n";

    Ch1 = InvertLetterCase(Ch1);
    cout << Ch1 << endl;


    return 0;
}