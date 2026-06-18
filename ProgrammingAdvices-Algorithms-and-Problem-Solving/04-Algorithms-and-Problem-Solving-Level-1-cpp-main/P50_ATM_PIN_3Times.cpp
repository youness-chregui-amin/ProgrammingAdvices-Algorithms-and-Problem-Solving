#include <iostream>
using namespace std;

string ReadPinCode(){
    string PinCode;
        cout<<"Please Enter PIN: ";
        cin>>PinCode;
    return PinCode;
}

bool Login()
{
    string PinCode;
    int Counter=3;
    do
    {
        Counter--;
        PinCode=ReadPinCode();
        if(PinCode=="1234")
            return 1;
        else{
            system("color 4F");
            cout<<"Wrong PIN,You have "<<Counter<<" more tries";
        }
    } while (Counter>=1 && PinCode!="1234");
    return 0;
}

int main()
{
    if(Login()){
        system("color 2F");
        cout<<"Your account balance is "<<7500;
    }else{
        cout<<"\nYour Card blocked call the bank for help.";
    }
    return 0;
}