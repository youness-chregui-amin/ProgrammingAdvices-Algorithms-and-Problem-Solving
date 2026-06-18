#include <iostream>
using namespace std;

int ReadNumber(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    return number;
}
int ReadPower(){
    int power;
    cout<<"Enter power: ";
    cin>>power;
    return power;
}

int PowerOfM(int number,int power){
    if(power==0){
        return 1;
    }

    int P=1;

    for(int i=1;i<=power;i++){
        P=P*number;//1*2 2*2 4*2 8*2 16*2
    }

    return P;
}

int main(){

    //methode1
    cout<<endl<< "Result = "<<PowerOfM(ReadNumber(),ReadPower());//min katkon function fwast function kat9ra mn lymn lisr
    
    //methode2
    // int num=ReadNumber();
    // int power=ReadPower();

    // cout<<endl<< "Result = "<<PowerOfM(num,power);//ila bghithom maytkhrb9och nfwthom variabl
    
    return 0;
}