#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int RandomNumber(int From,int To){
    //example From=5 and To=10 --- randNum=example rand=65422%(6)=hna l3dad ghadi ykon 9al mn 6 dakchi 3lach khasna nzido From rand=65422%(6)+5=5
    
    /*مثال: From = 5, To = 10

    rand() % (10 - 5 + 1) = rand() % 6 → النتائج = {0,1,2,3,4,5}

    نضيف +5: {5,6,7,8,9,10}*/
    
    int randNum=rand()%(To-From+1)+From;

    return randNum;
}

int main(){
    srand((unsigned)time(NULL));
    // cout<<rand()%10;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    return 0;
}
