#include<iostream>
using namespace std;


bool isSorted(int *arr,int len){
    if(len == 0 || len == 1){
        return true;
    } 
    return (arr[0] < arr[1]) && isSorted(arr+1,len-1);
}

int main(){

    int arr[] = {1,3,4,9,10,115,19};
    int len = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr,len)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is unsorted"<<endl;
    }

    return 0;
}