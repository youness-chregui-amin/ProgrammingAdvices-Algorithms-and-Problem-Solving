#include <iostream>
using namespace std;

int ReadNumber(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    return number;
}



void PrintRangeFrom1toN_UsingWhile(int num){
    int i=1;
    while (i<=num)
    {
        cout<<i<<endl;
        i++;
    }
}

void PrintRangeFrom1toN_UsingDoWhile(int num){
    int i=0;
    do{
        i++;
        cout<<i<<endl;
        
    }while(i<num);
    
}

void PrintRangeFrom1toN_UsingFor(int num){
    for(int i=1;i<=num;i++)
        cout<<i<<endl;
    
}

int main(){
    int N=ReadNumber();
    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingFor(N);
    
    return 0;
}