#include <iostream>
using namespace std;
#define PI 3.14
#define DEBUG 1
#define LOG(x) cout << x << endl

int main(){
    #if DEBUG == 1
        LOG("Debug mode is on");
    #endif
    LOG("Hello World");
    cout <<PI;
    return 0;
}