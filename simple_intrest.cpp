#include <iostream>
#include <string>
using namespace std;

int calSI(int r)
{
    float p,t;
    float SI;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the time period(in days): ";
    cin >> t;

    float y = t / 365;

    SI = (p * r * y) / 100;
    
    cout << "Simple Interest: " << SI << endl;
}
int takeInput()
{
    int r;

    string gen;
    cout << "Enter your gender M/F" << endl;

    cin >> gen;
    if (gen == "M")
    {
        r = 10;
        calSI(r);
    }
    else if (gen == "F")
    {
        r = 20;
        calSI(r);
        

    }
    else
    {
        cout << "Please Select an Appropriate gender male or female";
        takeInput();
    }
}

int main()
{

    takeInput();
    return 0;
}