#include<iostream>
using namespace std;

void printArray(int arr[] , int len){
    for(int i = 0; i < len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *arr,int len,int i){
    // base case
    if(i == len - 1){
        return;
    }

    // recursive case
    for(int j = 0; j < len - 1 - i; j++){
        if(arr[j] > arr[j + 1]){
            swap(arr[j],arr[j+1]);
        }
    }
    
    bubbleSort(arr,len,i+1);
}

int main(){

    int arr[] = {9,8,7,6,5,4,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,len);
    bubbleSort(arr,len,0);
    printArray(arr,len);

    return 0;
}