#include <iostream>
using namespace std;

class Counter {
    int count;
    public:
    Counter(){
        count=0;
    }
    Counter operator ++(){
     Counter temp;
     temp.count=++count;
     return temp;
    }
    Counter operator --(){
     Counter temp;
     temp.count=++count;
     return temp;
    }
    Counter operator ++(int){
     Counter temp;
     temp.count=++count;
     return temp;
    }
    Counter operator --(int){
     Counter temp;
     temp.count=++count;
     return temp;
    }
    void disp(){
        cout<<count<<endl;
    }
};

int main(){
    Counter C1,C2;
    C1 = C2++;
    C1.disp();
    C2.disp();

    
    return 0;
}