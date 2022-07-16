#include <iostream>
using namespace std;

int main (){
    int arr[]={1,2,3,5,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int el;
    cout<<"Enter the element you want to insert at begining"<<endl;
    cin>>el;
    int arr2[6];
    arr2[0]=el;

    for(int i =0; i<5;i++){
        arr2[i+1]=arr[i];
    }
    cout<<"The new array is"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

    
    return 0;
}