#include <iostream>
using namespace std;

struct brand{
    int bId;
    string name;
    int networth;

};

int main(){
    struct brand b1;  // Decl
    struct brand b2 = {2,"Apple",50000000}; // Decl and Init
    b1.bId=1;
    b1.name="Google";
    b1.networth=10000000;
    cout<<b1.name<<endl;
    cout<<b1.networth<<endl;
    cout<<b1.bId<<endl;
    cout<<b2.name<<endl;
    cout<<b2.networth<<endl;
    cout<<b2.bId;
    
     
    return 0;
}