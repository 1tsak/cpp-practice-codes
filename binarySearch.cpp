#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,4,6,7,8,9,10,12,15,19};
    int search;
    cout<<"Enter Elemenet to search";
    cin>>search;
    int l =0,h=10-1;
    while(l<=h){
       int mid =(l+h)/2;
       if(arr[mid]==search){
        cout<<"The element is at position "<<mid;
        break;
       }else if(arr[mid]<search){
        l=mid+1;

       }else{
        h=mid-1;
       }

    }
    return 0;
}