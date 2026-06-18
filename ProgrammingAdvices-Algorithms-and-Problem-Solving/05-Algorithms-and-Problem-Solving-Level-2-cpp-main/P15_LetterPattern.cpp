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

void PrintPatternLetter(int Number){
    cout<<"\n";
    for(int i=65;i<=65+Number-1;i++){
        // for(int j=1;j<=Number-(65+Number-1-i);j++){
        for(int j=1;j<=i-65+1;j++){
            cout<<char(i);
        }
        cout<<"\n";
    }
}

int main(){

    PrintPatternLetter(ReadPositiveNumber("Please Enter a positive number: "));

    return 0;
}