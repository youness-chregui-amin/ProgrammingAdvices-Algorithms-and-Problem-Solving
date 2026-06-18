#include <iostream>
using namespace std;

struct stPiggyBankContenet
{
    int Penny,Nickel,Dime,Quarter,Dollar;
};

stPiggyBankContenet ReadNumber()
{
    stPiggyBankContenet data;
    cout<<"Enter Total Pennies: ";
    cin>>data.Penny;
    cout<<"Enter Total Nickels: ";
    cin>>data.Nickel;
    cout<<"Enter Total Dimes: ";
    cin>>data.Dime;
    cout<<"Enter Total Quarters: ";
    cin>>data.Quarter;
    cout<<"Enter Total Dollars: ";
    cin>>data.Dollar;

    return data;
}

int CalculatePenniesAndDollars(stPiggyBankContenet data){
    int TotalPennies=0;

    TotalPennies=data.Penny*1+data.Nickel*5+
        data.Dime*10+data.Quarter*25+data.Dollar*100;

    return TotalPennies;
}



int main() {

    int TotalPennies=CalculatePenniesAndDollars(ReadNumber());
    cout<<"Total Pennies = "<<TotalPennies<<endl;
    cout<<"Total Dollars = "<<(float)TotalPennies/100;

    return 0;
}
