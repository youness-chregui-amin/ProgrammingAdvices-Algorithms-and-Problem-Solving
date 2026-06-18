#include <iostream>
using namespace std;

float ReadNumber(string Message){
    float BillValue;
    do
    {
        cout<<Message;
        cin>>BillValue;
    } while (BillValue<=0);

    return BillValue;
}

float TotalBillAfterServiceAndTax(float TotalBill){

    TotalBill=TotalBill*1.1;
    TotalBill=TotalBill*1.16;

    return TotalBill;
}

int main(){

    float BillValue=ReadNumber("Please Enter Total Bill: ");

    cout<<"Total Bill = "<<BillValue<<endl;
    
    cout<<"Total Bill After Service Fee and Sales Tax = "
    <<TotalBillAfterServiceAndTax(BillValue);

    return 0;
}