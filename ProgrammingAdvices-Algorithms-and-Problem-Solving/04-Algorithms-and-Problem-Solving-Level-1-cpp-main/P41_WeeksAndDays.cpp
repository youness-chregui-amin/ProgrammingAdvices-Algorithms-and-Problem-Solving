#include <iostream>
using namespace std;

float ReadNumber(string Message){
    float NumberHours;
    do
    {
        cout<<Message;
        cin>>NumberHours;
    } while (NumberHours<=0);
    
    return NumberHours;
}

float HoursToDays(float NumberOfHours){
    return NumberOfHours/24;
}
float HoursToWeeks(float NumberOfHours){
    return NumberOfHours/24/7;
}

float DaysToWeeks(float NumberOfDays){
    return NumberOfDays/7;
}

int main(){
    float NumberOfHours=ReadNumber("Please Enter Number of Hours: ");
    float NumberOfDays=HoursToDays(NumberOfHours);

    cout<<"Total Hours = "<<NumberOfHours<<endl;

    cout<<"Total Days = "<<NumberOfDays<<endl;

    //methode1
    cout<<"Total Weeks = "<<HoursToWeeks(NumberOfHours)<<endl;
    //methode2
    float NumberOfWeeks=DaysToWeeks(NumberOfDays);
    cout<<"Total Weeks = "<<NumberOfWeeks<<endl;

    return 0;
}