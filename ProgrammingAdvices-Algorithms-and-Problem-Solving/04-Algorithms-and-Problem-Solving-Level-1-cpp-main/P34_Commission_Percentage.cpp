#include <iostream>  
#include <string>    

using namespace std;  

int ReadNumber()
{
    int TotalSales;
    cout<<"Enter Total Sales: ";
    cin>>TotalSales;
    return TotalSales;
}

float GetComissionPercentage(float TotalSales){
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0; 
}

float CalculatePercentage(float TotalSales)
{ 
    return TotalSales * GetComissionPercentage(TotalSales);
}


int main()
{
    int TotalSales=ReadNumber();

    cout<<"Comission Percentage = "<<GetComissionPercentage(TotalSales);

    cout << endl << "Result = " << CalculatePercentage(TotalSales) << endl;

    return 0;  
}