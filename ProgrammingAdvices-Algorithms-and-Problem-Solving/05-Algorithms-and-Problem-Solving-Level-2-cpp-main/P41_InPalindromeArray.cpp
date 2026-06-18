#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;


void FillArray(int arr[100],int &arrLength)
{
    arrLength=6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
    

    /*int number;
    
    cout<<"Enter Length: ";
    cin>>arrLength;
    
    
    for (int i = 0; i < arrLength; i++)
    {
        cout<<"Enter elment "<<i+1<<" : ";
        cin>>number;
        arr[i]=number;
    }*/
    
}

void AddArrayElement(int Number,int arr2[100],int &arrLength)
{
    arrLength++;
    arr2[arrLength-1]=Number;
}

bool IsPalindromeArray(int arr[100],int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i]!=arr[arrLength-1-i])
        {
            return false;
        }
    };
    
    return true;
}

void PrintArray(int arr[100],int arrLength)
{

    for (int i = 0; i <arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{

    int arr[100],Length=0;

    FillArray(arr,Length);

    cout<<"\nArray 1 elements: ";
    PrintArray(arr,Length);

    if (IsPalindromeArray(arr, Length))
        cout << "\nYes array is Palindrome\n";
    else
        cout << "\nNO array is NOT Palindrome\n";

    return 0;
}