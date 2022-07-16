#include <iostream>
using namespace std;
int main()
{
    char s[] = "hello";
    cout<<s<<endl;
    char *p = s;
    cout<<p<<endl;
    cout << s[0] << " " << p[0];
    return 0;
}