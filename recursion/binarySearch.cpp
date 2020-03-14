#include<iostream>
using namespace std;

int BinarySearch(int *a,int start,int end,int key)
{
    if(start > end)
    {
        return -1;
    }

  
        int mid = (start+end)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid] > key)
        {
            return BinarySearch(a,start,mid-1,key);
        }
        else
        {
            return BinarySearch(a,mid+1,end,key);
        }

    
}



void Print(int *a,int length)
{
    for(int i = 0; i < length; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}



int main(){

	int arr[]={1,2,4,5,6,7,9,10};
	int length = sizeof(arr)/sizeof(int);
	int key;

	Print(arr,length);
    cout<<"Enter the element to be searched"<<endl;

	cin>>key;

    int result = BinarySearch(arr,0,length-1,key);
    if(result == -1)
    {
        cout<<"Element not found"<<endl;
        return 0;
    }
    else
    {
        cout<<"Element found at index : "<<result<<endl;
    }
	

	return 0; 
}