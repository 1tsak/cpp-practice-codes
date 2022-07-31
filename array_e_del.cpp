#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,5,6,4,9};
    int in;
    cout<<"Enter Index to delete"<<endl;
    cin>>in;

    for (int i = 0; i < 5; i++)
    {
        if (i>=in)
        {
            arr[i]=arr[i+1];
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    

    return 0;
}