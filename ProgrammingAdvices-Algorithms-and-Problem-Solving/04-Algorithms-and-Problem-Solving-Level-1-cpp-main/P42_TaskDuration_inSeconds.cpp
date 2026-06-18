#include <iostream>
using namespace std;

struct stTaskDuration
{
    int NumberOfDays,NumberOfHours,NumberOfMinutes,NumberOfSeconds;
};

int ReadPositiveNumber(string Message){
    int Number;
    do
    {
        cout<<Message;
        cin>>Number;
    } while (Number<=0);
    
    return Number;
}

stTaskDuration ReadTaskDuration(){
    stTaskDuration TaskDuration;
    TaskDuration.NumberOfDays= ReadPositiveNumber("Please Enter Number of Days: ");
    TaskDuration.NumberOfHours=ReadPositiveNumber("Please Enter Number of Hours: ");
    TaskDuration.NumberOfMinutes=ReadPositiveNumber("Please Enter Number of Minutes: ");
    TaskDuration.NumberOfSeconds=ReadPositiveNumber("Please Enter Number of Seconds: ");

    return TaskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration){
    int DurationInSeconds=0;
    DurationInSeconds+=TaskDuration.NumberOfDays*24*3600;
    DurationInSeconds+=TaskDuration.NumberOfHours*3600;
    DurationInSeconds+=TaskDuration.NumberOfMinutes*60;
    DurationInSeconds+=TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main(){
    int TotalSeconds=TaskDurationInSeconds(ReadTaskDuration());
    cout<<"Total Seconds= "<<TotalSeconds;

    return 0;
}