#include<iostream>
using namespace std;


int main(){
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        int input;
        cout<<"Enter Element at position "<<i<<endl;
        cin>>input;
        arr[i]=input;
    }
    cout<<"Enter element to search"<<endl;
    int search;
    cin>>search;
    bool found=false;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==search)
        {
            cout<<"The number is at position "<<i;
            found=true;
            break;
        }
        
    }
    if (!found)
    {
        cout<<"Element not found";
        
    }
    
    
    return 0;

}