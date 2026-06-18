#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;  
    do
    {
        cout << Message; 
        cin >> Number;           
    } while (Number <= 0);       
    return Number;
}

void ReadArray(int arr[100],int &arrLength){
    cout<<"\nPlease Enter Array Length: ";
    cin>>arrLength;
    cout<<"\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin>>arr[i];
    }
}

void PrintArray(int arr[100],int arrLength){
    for (int i = 0; i < arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int TimesRepeated(int Number,int arr[100],int arrLength){
    int Count=0;
    for (int i = 0; i < arrLength; i++)
    {
        if (Number==arr[i])
        {
            Count++;
        }
        
    }
    return Count;
}

int main(){

    int arr[100],arrLength,NumberToCheck;
    ReadArray(arr,arrLength);

    NumberToCheck=ReadPositiveNumber("Enter the number you want to check: ");
    
    cout<<"\n Original array: ";
    PrintArray(arr,arrLength);

    cout<<"\nNumber "<<NumberToCheck;
    cout<<" is repeated ";
    cout<<TimesRepeated(NumberToCheck,arr,arrLength);


    return 0;
}