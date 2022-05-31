#include <iostream>
using namespace std;
class B
{
    public:
    B(){
        cout<<"C called\n";
    }
    ~B(){
        cout<<"D called\n";
    }
};
  

int main(){
    B *b = new B[5];
    delete b;

    return 0;
}