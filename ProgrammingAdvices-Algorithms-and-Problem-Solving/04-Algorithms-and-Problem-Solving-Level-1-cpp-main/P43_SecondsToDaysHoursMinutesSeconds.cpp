#include <iostream>
#include <cmath>
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

stTaskDuration SecondsToTaskDuration(int TotalSeconds){
    stTaskDuration TaskDuration;
    const int SecondsPerDay=24*3600;
    const int SecondsPerHour=3600;
    const int SecondsPerMinute=60;

    int Remainder=0;
    //methode1
    // TaskDuration.NumberOfDays=floor(TotalSeconds/SecondsPerDay);
    // Remainder=TotalSeconds%SecondsPerDay;
    // TaskDuration.NumberOfHours=floor(Remainder/SecondsPerHour);
    // Remainder=Remainder%SecondsPerHour;
    // TaskDuration.NumberOfMinutes=floor(Remainder/SecondsPerMinute);
    // Remainder=Remainder%SecondsPerMinute;
    // TaskDuration.NumberOfSeconds=Remainder;

    //method2
    TaskDuration.NumberOfDays=floor(TotalSeconds/SecondsPerDay);
    Remainder=TotalSeconds-(SecondsPerDay*TaskDuration.NumberOfDays);
    TaskDuration.NumberOfHours=floor(Remainder/SecondsPerHour);
    Remainder=Remainder-(SecondsPerHour*TaskDuration.NumberOfHours);
    TaskDuration.NumberOfMinutes=floor(Remainder/SecondsPerMinute);
    Remainder=Remainder-(SecondsPerMinute*TaskDuration.NumberOfMinutes);
    TaskDuration.NumberOfSeconds=Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(stTaskDuration TaskDuration){
    TaskDuration.NumberOfSeconds;
    cout<<TaskDuration.NumberOfDays<<":"
    <<TaskDuration.NumberOfHours<<":"
    <<TaskDuration.NumberOfMinutes<<":"
    <<TaskDuration.NumberOfSeconds;
}

int main(){
    int TotalSeconds=ReadPositiveNumber("Please Enter Total Seconds: ");

    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;
}