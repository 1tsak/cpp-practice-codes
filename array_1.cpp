#include <iostream>
using namespace std;

int main (){
    
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        int input;
        cout<<"Enter Element at position "<<i+1<<endl;
        cin>>input;
        arr[i]=input;
    }
    cout<<"\\\\\\\\\\\\\\\\\Output///////////////////";
    // cout <<arr;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
        cout<<&arr[i]<<endl;
    }
    
    return 0;
}