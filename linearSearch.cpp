// Program for linear search


#include<iostream>
using namespace std;

int main()
{   
    int arr[] = {2,8,4,56,14,78,96,12,44};
    int length = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter the value to be searched"<<endl;

    int key;
    cin>>key;

    int i;
    for(i = 0; i < length; i++)
    {
        if(arr[i] == key)
        {
            cout<<"Element found"<<endl;
            break;
        }

    }

    if(i == length)
    {
        cout<<"Element not found"<<endl;
    }



    return 0;
}