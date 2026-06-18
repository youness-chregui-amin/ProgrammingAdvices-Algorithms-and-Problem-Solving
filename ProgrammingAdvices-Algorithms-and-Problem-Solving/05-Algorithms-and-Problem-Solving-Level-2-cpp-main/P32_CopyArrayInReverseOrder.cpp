#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int RandomNumber(int From,int To)
{
    return rand()%(To-From+1)+From;
}

void FillArrayWithRandomNumbers(int arr[100],int &arrLength)
{
    cout<<"Enter number of elements: ";
    cin>>arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i]=RandomNumber(1,100);
    }
}

void PrintArray(int arr[100],int arrLength)
{

    for (int i = 0; i <arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void CopyArrayInReverseOrder(int arrSource[100],int arrDestination[100],int arrLength){

    // Methode1;
    int Counter=arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        // Counter--;
        arrDestination[i]=arrSource[arrLength-1-i];
    }

    //Methode2
    // int Counter=0;
    // for (int i = arrLength-1; i >= 0; i--)
    // {
    //     arrDestination[i]=arrSource[Counter];
    //     Counter++;
    // }
    
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100],arrLength;

    FillArrayWithRandomNumbers(arr,arrLength);
    
    int arr2[100];
    CopyArrayInReverseOrder(arr,arr2,arrLength);

    cout<<"\nArray 1 elements: \n";
    PrintArray(arr,arrLength);

    cout<<"\nArray 2 elements after copy: \n";
    PrintArray(arr2,arrLength);

    return 0;
}