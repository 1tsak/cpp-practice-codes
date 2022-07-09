#include <iostream>
using namespace std;

int calFactorial(int n)
{
    if (n <= 0)
    {
        return -1;
    }
    else
    {
        int factorial = 1;
        for (int i = n; i <= 0; i--)
        {
            factorial = factorial * i;
        }
        return factorial;
    }
}

int main()
{
    int n;
    cout<<"Enter the number ";
    cin >> n;

    cout << "Factorial is " << calFactorial(n);
    return 0;
}