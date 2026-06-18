#include <iostream>
using namespace std;

struct stDriverData
{
    int age;
    bool HasDriverLicense;
    bool HasRecommendation;
};

stDriverData ReadInfo()
{
    stDriverData Info;
    cout << "\nPlease Enter Your Age: \n";
    cin >> Info.age;

    cout << "Do you have a driver's license? (1 for Yes, 0 for No)\n";
    cin >> Info.HasDriverLicense;

    cout << "Do you have a recommendation? (1 for Yes, 0 for No)\n";
    cin >> Info.HasRecommendation;
    return Info;
}

bool IsAccepted(stDriverData Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (Info.age > 21 && Info.HasDriverLicense);
    }
}

//** Methode 1 */
// void PrintInfo(bool Info)

//** Methode 2 */
void PrintInfo(stDriverData Info)
{
    //** Methode 1 */
    // if (Info==true)

    //** Methode 2 */
    if (IsAccepted(Info))
    {
        cout << "Hired";
    }
    else
    {
        cout << "Rejected";
    }
}

int main()
{
    //** Methode 1 */
    // PrintInfo(IsAccepted(ReadInfo()));

    //** Methode 2 */
    PrintInfo(ReadInfo());
    return 0;
}