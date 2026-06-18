#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};


stInfo ReadInfo(){
    stInfo Info;
    cout<<"Enter Your FirstName: ";
    cin>>Info.FirstName;


    cout<<"\nEnter Your LastName: ";
    cin>>Info.LastName;
    
    return Info;
}

string GetInfo(stInfo Info,bool Reversed){
    string FullName;
    if(Reversed)
    FullName=Info.LastName+" "+Info.FirstName;
    else
    FullName=Info.FirstName+" "+Info.LastName;
    return FullName;
    // return Info.FirstName+" "+Info.LastName;
}


void printName(string Fullname){
    cout<<"Your FullName is: "<<Fullname<<endl;
}


int main()
{
    // printName(GetInfo(ReadInfo()));
    printName(GetInfo(ReadInfo(),true));
    return 0;
}