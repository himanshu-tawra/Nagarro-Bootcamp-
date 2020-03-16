// Program for binary search

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,4,9,12,15,21,39};
    int length = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = length - 1;

    int key;
    
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;

    while(start <= end)
    {   
        int mid = (start+end)/2;
        if(arr[mid] == key)
        {
            cout<<"Element found"<<endl;
            break;
        }
        else if(key > arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid - 1;
        }

    }

    if(start > end)
    {
        cout<<"Element not found"<<endl;
    }

    return 0;
}