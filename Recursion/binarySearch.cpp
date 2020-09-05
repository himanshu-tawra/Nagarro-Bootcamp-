#include<iostream>
using namespace std;


int binarySearch(int arr[] , int start, int end, int key){

    //base case
    if(start > end){
        return -1;
    }

    // recursive case
    int mid = (start + end)/2;

    if(arr[mid] == key){   
        return mid;
    }
    else if(arr[mid] < key){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
    
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    
    cout<<binarySearch(arr,0,len-1,key)<<endl;
    
    return 0;
}