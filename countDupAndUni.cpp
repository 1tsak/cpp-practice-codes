#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,2,1,2,3,5};
    sort(arr,arr+6);
    int dups=0,uniqs=0;
    for (int i =0;i<5;i++){
        if(arr[i]==arr[i+1]){
            dups++;
        }else{
            uniqs++;
        } 
    }
    cout<<"unique: "<<uniqs<<" dups:"<<dups;
    return 0;
}