#include <iostream>
using namespace std;
/*
O/P
*
**
***
****
*/
int main()
{
    int n = 3;
    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}