#include <iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    for (int j = 10; j<15;j++)
        v.push_back(j);

        vector<int>::const_iterator j;
        for (j=v.begin(); j!=v.end();++j)
            cout<<*j<<" ";
        cout<<endl;

        return 0 ;
}

