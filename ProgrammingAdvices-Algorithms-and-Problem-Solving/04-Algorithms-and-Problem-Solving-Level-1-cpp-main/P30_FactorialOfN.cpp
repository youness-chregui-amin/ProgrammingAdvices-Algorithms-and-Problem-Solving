#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message){
    int number;
    do
    {
        cout<<Message;
        cin>>number;
    } while (number<0);
    
    return number;
}

int FactorialOfN(int num){
    int Factorial=1;

    // Methode 1

    for(int i=num;i>=1;i--){
        Factorial*=i;
    }

    // Methode 2

    // for(int i=1;i<=num;i++){
    //     Factorial*=i;
    // }
        
    return Factorial;
}


int main(){

    cout<<FactorialOfN(ReadPositiveNumber("Please Enter a positive number: "));
    
    return 0;
}