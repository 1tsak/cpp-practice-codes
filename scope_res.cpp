#include <iostream>
using namespace std;

// global variable
int number = 50;

int main(){

    int number = 2000; // local variaable

    //Print the value of the local variable
    cout<<"Local Variable:- "<<number<<endl;

    // To access global variaable with same name we can use scope resolution operator (::)
    cout<<"Global Variable:- "<<::number;

    return 0;


}