#include <iostream>
using namespace std;
void selSort(int *arr,int size){

    //Write your code here
    for(int i=0;i<size;i++){
        int min=arr[i];
        int minPos=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<min){

                min=arr[j];
                minPos=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[minPos];
        arr[minPos]=temp;
        
        
    
}

}
int main(){
    int arr[10]={4,5,8,1,4,6,4,2,9,7};
    selSort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}