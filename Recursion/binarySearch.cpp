#include<iostream>
using namespace std;


int binarySearch(int *arr,int start,int end,int key){
    if(start > end){
        return -1;
    }
    int mid = (start+end)/2;

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

void printArray(int *arr,int len){
    for(int i = 0; i < len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {1,3,4,9,10,19,115};
    int len = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,len);

    int ans = binarySearch(arr,0,len-1,115);

    if(ans != -1){
        cout<<"Element found at index "<<ans<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}