#include <iostream>
#include <cmath>
using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };


int ReadNumberInRange(string Message,int From,int To){
    int Number;
    do
    {
        cout<<Message;
        cin>>Number;
    } while (Number<From || Number>To);
    
    return Number;
}

enDayOfWeek ReadDayOfWeek(){
    return (enDayOfWeek)ReadNumberInRange("Please enter day number (Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7)?", 1, 7);
}


string GetDayOfWeek(enDayOfWeek Day)
{    switch (Day)
    {
    case enDayOfWeek::Sat:
        return "Sat";
    case enDayOfWeek::Sun:
        return "Sun";
    case enDayOfWeek::Mon:
        return "Mon";
    case enDayOfWeek::Tue:
        return "Tue";
    case enDayOfWeek::Wed:
        return "Wed";
    case enDayOfWeek::Thu:
        return "Thu";
    case enDayOfWeek::Fri:
        return "Fri";
    default:
            return "Not a valid Day";
    }
}

int main(){

    cout<<GetDayOfWeek(ReadDayOfWeek());

    return 0;
}