#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime{prime=1,NotPrime=2};

float ReadNumber(string Message){
    float Number;
    
    do
    {
        cout<<Message;
        cin>>Number;
    } while (Number<=0);
    
    return Number;
}

enPrimeNotPrime CheckPrime(int number){
    int num=round(number/2);

    for(int Counter=2;Counter<=num;Counter++){
        if(number%Counter==0){
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::prime;
}

void PrintNumberType(int number){
    switch(CheckPrime(number)){
        case enPrimeNotPrime::prime:
            cout<<"Number "<<number<<" is Prime.\n";
            break;
        case enPrimeNotPrime::NotPrime:
            cout<<"Number "<<number<<" is Not Prime.\n";
            break;
    }
}


//methode 2
// void CheckIfPrimeNumber(int number){
//     int K=0;
//     for(int i=1;i<=number;i++){
//         if(number%i==0){
//             K+=1; 
//         }
//     }    
//     if(K>2)
//         cout<<"Not prime";
//     else if(K==1)
//         cout<<"not prime";
//     else
//         cout<<"prime";
// }

int main(){

    //methode 1
    PrintNumberType(ReadNumber("Please Enter a Positive Number: "));

    //methode 2
    // CheckIfPrimeNumber(ReadNumber("Please Enter a Positive Number: "));
    return 0;
}