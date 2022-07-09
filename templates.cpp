#include <iostream>
using namespace std;

template <typename T>
T swapNumbers(T a, T b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<"\t"<<b;
}
int main()
{
    swapNumbers<int>(2,3);
    swapNumbers<float>(2.0,3.0);
    return 0;
}
