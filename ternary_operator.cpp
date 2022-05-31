#include <iostream>
using namespace std;

int main(){
    int x=1;
    string issAdult= (x>=18) ? "You are an adult" : "You are a kid";
    cout << issAdult;
    return 0;
}