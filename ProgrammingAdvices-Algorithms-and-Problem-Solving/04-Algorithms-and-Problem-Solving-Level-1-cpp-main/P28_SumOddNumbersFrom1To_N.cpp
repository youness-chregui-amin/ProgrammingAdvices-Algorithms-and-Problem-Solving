#include <iostream>
using namespace std;

enum enOddOrEven{Odd=1,Even=2};

int ReadNumber(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    return number;
}

enOddOrEven CheckOddOrEven(int num){
    if(num%2!=0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int SumOddNumbersUsingWhile(int num){
    int sum=0,Counter=0;
    while (Counter<num)
    {
        Counter++;
        if(CheckOddOrEven(Counter)==enOddOrEven::Odd)
            sum+=Counter;
    }
    return sum;
}

int SumOddNumbersUsingDoWhile(int num){
    int Counter=0,sum=0;
    do{
        Counter++;
        if(CheckOddOrEven(Counter)==enOddOrEven::Odd)
            sum+=Counter;
        
    }while(Counter<num);

    return sum;
}

int SumOddNumbersUsingFor(int num){
    int sum=0;

    for(int Counter=1;Counter<=num;Counter++)
    {
        if(CheckOddOrEven(Counter)==enOddOrEven::Odd)
            sum+=Counter;
    }
    return sum;
}

int main(){
    int N=ReadNumber();
    cout<<SumOddNumbersUsingWhile(N);
    // cout<<SumOddNumbersUsingDoWhile(N);
    // cout<<SumOddNumbersUsingFor(N)<<endl;
    
    return 0;
}