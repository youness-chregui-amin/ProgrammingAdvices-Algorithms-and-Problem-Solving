#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message){
    int Number = 0;  
    do
    {
        cout << Message;
        
        cin >> Number;
    } while (Number <= 0);  
    
    return Number;  
}

void PrintNumberPattern(int Number){
    cout<<"\n";
    for(int i=1;i<=Number;i++){//loop1 number of lines
        for(int j=1;j<=i;j++){//loop2 number of columns
            cout<<i;
        }
        cout<<"\n";
    }
}

int main(){

    PrintNumberPattern(ReadPositiveNumber("Please Enter a positive number: "));

    return 0;
}