#include <iostream>
using namespace std;

void linearSearch(int arr[])
{
    int search;
    cout << "Enter Element to Search" << endl;
    cin >> search;
    int found = false;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            found = true;
            cout << "Element found at index: " << i << endl;
        }
    }
    if (!found)
    {
        cout << "Element Not Found" << endl;
        ;
    }
}
void displayArray(int arr[])
{
    cout<<"//////////////////////Array Output///////////////////////"<<endl;
    for (int i = 0; i < 6; i++)
    {
     cout<<arr[i]<<endl;   
    }
    
}
void deleteElement(int arr[])
{
    int in;
    cout << "Enter Index to delete" << endl;
    cin >> in;

    for (int i = 0; i < 5; i++)
    {
        if (i >= in)
        {
            arr[i] = arr[i + 1];
        }
    }
    displayArray(arr);
}
void insertElement(int arr[])
{
    int in;
    int input;
    cout << "Enter Element to Insert" << endl;
    cin>>input;

    cout << "Enter Index to Insert at" << endl;
    cin >> in;
    

    for (int i = 0; i < 5; i++)
    {
        if (i >= in)
        {
            arr[i+1] = arr[i];
        }
    }
    arr[in]=input;
    displayArray(arr);

}

int main()
{
    int opt;
    int arr[6] = {0};
    cout << "Enter Elements in array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter 1 For Search 2 For Deletetion 3 For Insertion" << endl;
    cin >> opt;
    if (opt == 1)
    {
        linearSearch(arr);
    }
    else if (opt == 2)
    {
        deleteElement(arr);
    }else if(opt==3){
        insertElement(arr);
    }

    return 0;
}
