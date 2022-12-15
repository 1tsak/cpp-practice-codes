#include <iostream>
#include <bits/stdc++.h> 
#include<string>
using namespace std;
string leftRotate(string str, int d) {
    // Write your code here.
    string lrString;
     for(int i=d;i<str.length();i++){
         lrString.push_back(str[i]);
     }
    for(int i=0;i<d;i++){
        lrString.push_back(str[i]);
    }
    return lrString;
}

string rightRotate(string str, int d) {
    // Write your code here.
    string RrString;
     for(int i=str.length()-d;i<str.length();i++){
         RrString.push_back(str[i]);
     }
    for(int i=0;i<str.length()-d;i++){
        RrString.push_back(str[i]);
    }
    return RrString;
}
int main(){
    cout<<leftRotate("codingninjas",3)<<endl;
    cout<<rightRotate("codingninjas",3)<<endl;

    return 0;
    
}