#include <iostream>
using namespace std;

int ReadNumber(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    return number;
}



void PrintRangeFrom1toN_UsingWhile(int num){
    // int i=num;
    int i=num+1;
    while (i>1)
    {
        i--;
        cout<<i<<endl;
        // i--;
    }
}

void PrintRangeFrom1toN_UsingDoWhile(int num){
    // int i=num;
    int i=num+1;
    do{
        i--;
        cout<<i<<endl;
        // i--;
    }while(i>1);
    
}

void PrintRangeFrom1toN_UsingFor(int num){
    for(int i=num;i>=1;i--)
        cout<<i<<endl;
    
}

int main(){
    int N=ReadNumber();
    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingFor(N);
    
    return 0;
}