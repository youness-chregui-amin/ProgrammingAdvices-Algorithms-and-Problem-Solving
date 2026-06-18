#include <iostream>
// #include <math.h>
using namespace std;

int ReadNumber(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    return number;
}

void PowerOf2_3_4(int num){
    int a,b,c;
    a=num*num;
    b=num*num*num;
    c=num*num*num*num;
    cout<<a<<" "<<b<<" "<<c<<endl;
}

int main(){

    PowerOf2_3_4(ReadNumber());
    
    return 0;
}