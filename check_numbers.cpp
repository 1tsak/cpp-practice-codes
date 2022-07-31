#include <iostream>
using namespace std;

int main()
{
    int arr[5]; 
    int a=0,b=0,c=0,d=0,e=0;
    int n;
    cin>>n;
    
    for (int i = 0; i < 5; i++) {
        int input;
        cin>>input;
        bool found;
        for (int i = 0; i < 5; i++) {
            if(arr[i]==input){
                found=true;
            }
        }
        if(!found){
            if(i==0){
                a=input;
            }
            else if(i==1){
                b=input;
            }
           else if(i==2){
                c=input;
            }
           else if(i==3){
                d=input;
            }
           else if(i==4){
                e=input;
            }
        }
        
    }
    if(a!=0){
        cout<<a<<endl;
    }
    if(b!=0){
        cout<<b<<endl;
    }
    if(c!=0){
        cout<<c<<endl;
    }
    if(d!=0){
        cout<<d<<endl;
    }
    if(e!=0){
        cout<<e<<endl;
    }
    
    
    
    return 0;
}