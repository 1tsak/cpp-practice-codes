#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int search)
{
    if (end >= start)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == search)
            return mid;

        if (arr[mid] > search)
            return binarySearch(arr, start, mid - 1, search);

        return binarySearch(arr, mid + 1, end, start);
    }

    return -1;
}

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        int input;
        cout << "Enter Element at position " << i << endl;
        cin >> input;
        arr[i] = input;
    }
    cout << "Enter element to search" << endl;
    int search;
    cin >> search;
    bool found = false;
    int n = sizeof(arr) / sizeof(arr[0]);

    binarySearch(arr, 0, n - 1, search);

    return 0;
}