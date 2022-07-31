#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    vector<int> arr;
    for (int i =0; i < n; i++) {
        int input;
        cin>>input;
        arr.push_back(input);
    }
    // cout<<arr.size();
    for (int i = arr.size()-1; i>=0; i--) {
        cout<<arr[i]<<" ";
    }
      
    return 0;
}
