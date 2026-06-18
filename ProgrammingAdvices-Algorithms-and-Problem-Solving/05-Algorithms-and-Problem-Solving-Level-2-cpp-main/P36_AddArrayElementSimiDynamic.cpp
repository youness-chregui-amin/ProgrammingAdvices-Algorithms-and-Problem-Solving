#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number? ";
    cin >> Number;
    return Number;
}

void AddArrayElement(int Number,int arr[100],int &arrLength){
    arrLength++;
    arr[arrLength-1]=Number;
}

void InputUserNumbersInArray(int arr[100],int &arrLength)
{
    bool addMore;

    do
    {
        AddArrayElement(ReadNumber(),arr,arrLength);

        cout<<"Do you want to add more numbers?[0]:No,[1]=yes? ";
        cin>>addMore;
        
    } while (addMore);
    
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
    srand((unsigned)time(NULL));

    int arr[100],arrLength=0;

    InputUserNumbersInArray(arr,arrLength);

    cout<<"Array Length: "<<arrLength<<endl;

    cout<<"Array elements: ";
    PrintArray(arr,arrLength);

    return 0;
}