#include <iostream>
using namespace std;

string ReadName()
{
    string name;
    cout << "Enter Name :";
    getline(cin, name);
    return name;
}

void PrintName(string name)
{
    cout << "Your name is : " << name;
}

int main()
{
    PrintName(ReadName());
    return 0;
}