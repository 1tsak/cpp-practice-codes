#include <iostream>
using namespace std;

// template <typename T>
// T swapNumbers(T a, T b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }

// Dynamic array using templates
template <int T>
class Array
{
private:
    int arr[T];

public:
    int getSize()
    {
        return T;
    }
};
int main()
{
    // swapNumbers<int>(2, 3);
    // swapNumbers<float>(2.0, 3.0);
    Array<5> arr;
    cout << arr.getSize();
    return 0;
}
