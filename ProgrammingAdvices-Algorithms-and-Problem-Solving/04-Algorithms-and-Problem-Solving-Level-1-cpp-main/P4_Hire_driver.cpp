#include <iostream>
using namespace std;

struct stDriverData
{
    int age;
    bool HasDriverLicense;
};

stDriverData ReadInfo()
{
    stDriverData Info;
    cout << "\nEnter age: \n";
    cin >> Info.age;

    cout << "Enter driverLicense: \n";
    cin >> Info.HasDriverLicense;
    return Info;
}

bool IsAccepted(stDriverData Info)
{
    //**methode 1 */
    // if (Info.age > 21 && Info.HasDriverLicense)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    //** Methode 2 */

    return (Info.age > 21 && Info.HasDriverLicense);
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