#include <iostream>
using namespace std;

void swapAlt(int *arr,int size){
        for(int i =0; i<size-1;i+=2){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    int *arr = new int[size];
    cout<<"Enter elements in array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    swapAlt(arr,size);
    cout<<"Swapped array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    return 0;
}